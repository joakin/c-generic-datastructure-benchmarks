# C dynamic array generic approaches: runtime + compilation benchmark (v2)

Reproducible benchmark created November 10, 2026. Compares eight implementations of a dynamically growing array, with emphasis on **idiomatic Daniel Hooper-style type-witness / shared byte-oriented arrays**.

The experiment uses **one translation unit** per executable, with C11 on Clang/GCC or C++20 on Clang++/G++, under `-O2 -DNDEBUG`.

## New idiomatic variants (6, 7)

`typedef TypedArray(T) TArray;` declares a typed union containing a `RawArray` and a phantom `T *` used only in `__typeof__` expressions. The `raw` member is the active member; the phantom is never accessed at runtime. This is based on Daniel Hooper's idea, **not a byte-for-byte copy** of his original implementation.

Large/rare functions (`raw_reserve`, `raw_grow`) are ordinary **non-static, non-inline** functions implemented exactly once in source. The small, frequently used functions (`raw_push_small` and `raw_at_small`) are `static inline` in variant 6 and just `static` in variant 7. Thin macros obtain the type of a value, initialize a typed temporary (evaluating the expression once), and call the real function. There are **no forced-inline or noinline/noipa attributes** in these two new variants. Therefore the compiler is free to inline any visible functions, including growth, or make IPA clones. A shared *source implementation* does not guarantee one binary implementation after compiler optimization.

Standalone reusable implementation: `hooper_array.h`, `hooper_array.c`, `hooper_demo.c`. The benchmark's equivalent implementation is in `bench.c` and `workload.inc`.

**C portability:** `__typeof__` is a GCC/Clang extension under C11. Standard C23 introduces `typeof`, which can replace the extension when the compiler supports it. `realloc` is suitable for fundamentally aligned objects, but **not necessarily over-aligned types**. The demo is for POD/trivially-copyable elements, not objects with ownership/lifetime requirements.

## Variants

| Number | Description | Inlining policy |
|---:|---|---|
| 0 | C per-type include-generation | Typed `static inline` functions |
| 1 | C Hooper raw backend, shared out-of-line | Forced `noinline` / GCC `noipa`, deliberately constrained |
| 2 | C Hooper out-of-line push, inline typed indexing | Same as 1 except indexing |
| 3 | C Hooper forced-inlining raw backend | `always_inline` to force specialization |
| 4 | C++20 templates without STL | Normal inline template members |
| 5 | C Hooper shared growth + macro typed stores | Macro push fast path, forced out-of-line growth |
| **6** | **C Hooper idiomatic small helpers** | **`static inline` for small helpers; ordinary growth/reserve; no attributes** |
| 7 | C Hooper idiomatic no `inline` keyword | Identical to 6 but `static` small helpers |

All C++ containers use plain data structs without special constructors/destructors. All implementations use `realloc`, initial capacity 4, doubled growth, overflow checks, bounds checks, and `free`.

## Runtime matrix

* Element sizes: 4, 16, 64, 256 bytes (`uint32_t w[N]` with 4-byte alignment).
* Array lengths: 8, 128, 8192, 262144 elements.
* Operations: grow-and-append (timed allocation/free), append with capacity reserved in advance, sequential indexed read, pseudorandom indexed read, direct pointer iteration, indexed mutation.
* Compilers: Clang 17, GCC 14.
* **1536 configurations**: 8 variants × 2 compilers × 4 sizes × 4 lengths × 6 operations.
* Five measured samples per configuration, randomized variant ordering, checksum equivalence verified; one pinned CPU where permitted.
* Wall-clock runtime inside the executables uses `clock_gettime(CLOCK_MONOTONIC_RAW)` and reports nanoseconds divided by `repetitions × element count`. Source data and random indices are prepared outside timed loops. **Grow includes free in the timed region**, while reserved append excludes reserve. Other timed operations access only the first 32-bit field of each struct.
* Samples auto-calibrated aiming at ~15 ms for the slowest variant in each scenario; fast variants can be timed for less. Note some absolute timings are very small and compiler optimization can transform loops significantly.

`results_v2.json` contains every median, repetition count, and all five raw samples. `results_v2.csv` is a flat per-scenario table, `samples_v2.csv` contains each sample, `summary_v2.md` contains geometric means and illustrative absolute times. Five higher-repetition validation spot-checks (nine samples each) in `spotcheck_v2.json`.

### Geometric means relative to specialized C

Each cell weights all 16 size/length combinations equally. **This is not a real-application weighting.** 1.00× = same speed; lower is faster.

| Compiler | Operation | Hooper fully shared (v1) | **Idiomatic inline (v6)** | Idiomatic no hint (v7) |
|---|---|---:|---:|---:|
| Clang | Grow | 2.95× | **1.09×** | 1.05× |
| Clang | Reserved append | 4.66× | **1.16×** | 1.07× |
| Clang | Sequential read | 5.97× | **1.08×** | 1.07× |
| Clang | Random read | 2.96× | **1.11×** | 1.11× |
| Clang | Direct iteration | 0.99× | **0.99×** | 1.00× |
| Clang | Mutation | 4.95× | **0.99×** | 0.98× |
| GCC | Grow | 3.03× | **1.03×** | 2.83× |
| GCC | Reserved append | 4.06× | **1.22×** | 4.12× |
| GCC | Sequential read | 2.66× | **0.87×** | 0.92× |
| GCC | Random read | 2.59× | **0.99×** | 0.93× |
| GCC | Direct iteration | 1.02× | **0.93×** | 0.96× |
| GCC | Mutation | 3.25× | **0.99×** | 0.99× |

#### Verified regressions / outliers

1. **GCC, 64-byte elements, N=128, reserved append**. Extended spot-check: per-element medians **1.18 ns specialized C**, **1.17 ns C++**, **34.72 ns Hooper macro push**, **10.23 ns idiomatic inline**, **13.22 ns no hint**. These measurements indicate significant compiler codegen variation for 64-byte struct copies versus generic `memcpy`; further disassembly/profiling is needed to isolate the exact instruction-level cause.
2. **GCC, 16-byte elements, N=8192, reserved append**. Extended spot-check: **0.44 ns specialized**, **0.42 ns idiomatic inline**, **7.82 ns no-hint**. GCC generated a real `raw_push_small` symbol and twelve call sites in the no-hint runtime binary. It did not do so with `static inline`; Clang inlined the helper in both variants. The inline hint changes actual machine code on this workload.
3. **Clang, 256-byte elements, N=8192, reserved append**. Extended spot-check: specialized C 14.92 ns, idiomatic 14.63 ns, macro typed fastpath 6.46 ns. Copying strategies differ; measurements are hardware- and alignment-sensitive.

Do not assume the geometric mean applies to a project's work distribution, nor that a type-erased function always implies one shared piece of machine code when IPA is permitted.

## Compilation-time comparison

The 120-type source workload is based on the previous compilation benchmark and includes a `c_hooper_idiomatic_inline.c` and `c_hooper_idiomatic_nohint.c`, generated by `generate_120_idiomatic.py`. It is a **separate synthetic compilation workload**, not the four-type runtime source. `compile_v2.json` has per-trial times (five at `-O0`, four at `-O2`).

| Variant | Clang `-O2` | GCC `-O2` |
|---|---:|---:|
| Include-generated C | 1519 ms | 1219 ms |
| Minimal C++ templates | 1572 ms | 1352 ms |
| Hooper fully shared | 831 ms | 807 ms |
| Hooper macro typed stores | 1237 ms | 989 ms |
| **Hooper idiomatic `static inline`** | **1268 ms** | **1026 ms** |
| Hooper idiomatic no inline keyword | 1343 ms | 1061 ms |

`code_size.csv` includes `.text`, `.data`, and `.bss` for four-type benchmark executables and the 120-type compilation object files. Code size is *not universally smaller* in the idiomatic version; compiler codegen and inlining policies affect it.

## Reproduce

```sh
sh build.sh
python3 run_v2.py --samples 5 --target-ms 15
python3 analyze_v2.py
python3 generate_120_idiomatic.py
python3 compile_v2.py
clang -std=c11 -O2 hooper_demo.c hooper_array.c -o bin/hooper_demo
./bin/hooper_demo
python3 spotcheck_v2.py
```

`run_v2.py` and `spotcheck_v2.py` use Linux `sched_setaffinity` and the latter selects specific outlier cases. `CLOCK_MONOTONIC_RAW` and process affinity make the runner Linux-specific; the array implementations are not Linux-specific. Tested on a shared virtualized AMD EPYC 9V74, Linux x86-64; workloads vary with CPU scheduling, caches, and the libc allocator.

## Conclusions

Hooper-style type witnesses + one raw implementation + **ordinary** small `static inline` functions are a practical compile-time/runtime compromise, but **not guaranteed** fastest for every struct layout or operation. Under optimization, the compiler can create specialized machine code even from shared generic source. `static inline` is not a promise, and missing `inline` is not a prohibition; the GCC case demonstrates why a measured hint can still matter. To choose for a game project, test the actual containers, element sizes and allocator, ideally on the target development machine.
