# Runtime performance of three C/C++ generic-array approaches

Benchmark created November 10, 2026 in response to a request to compare
C include-generated arrays, Daniel Hooper-style typed-union arrays with one
byte-oriented backend, and minimal C++ templates. The benchmark additionally
compares three choices for inlining the Hooper backend and tests an inline
fast path with out-of-line shared allocation.

## Implementation variants

| ID | Name | Backend | Hot path |
|---:|---|---|---|
| 0 | C include-generated | C `#include` produces one `Array` implementation per element type | Inline typed push and bounds-checked index |
| 1 | C Hooper shared | One out-of-line `raw_push`, `raw_at`, `raw_reserve` for all element types | Generic function called on every operation |
| 2 | C Hooper inline index | Same out-of-line `raw_push`, `raw_reserve` | Typed bounds check/index inlined; push still calls raw backend |
| 3 | C Hooper inline backend | Same byte-oriented C source implementation, with forced inline enabled | Compiler may specialize all generic functions by element width |
| 4 | Minimal C++ templates | `template<class T> struct Array`, no STL | Inline typed push and bounds-checked index |
| 5 | C Hooper shared growth only | One out-of-line `raw_grow`, only called when capacity is exhausted | Typed inline assignment and indexing |

The Hooper-like variants use `union { RawArray raw; T *_type_witness; }`.
The phantom pointer is a compile-time witness; the active value is `raw`.
The benchmark uses `__typeof__` to type-check operations and byte copying
via `memcpy`, deliberately avoiding calls through incompatible function-pointer
types. It's a variant of Hooper's idea, not his exact source implementation.
`__typeof__` is a GCC/Clang extension in C11; `typeof` is standardized in C23.

All implementations use `realloc`, start with capacity 4, double on growth,
check size overflow and bounds, and release allocations with `free`.
All element types are plain trivially-copyable C-compatible structs.

## Matrix

- Element types: 4, 16, 64, 256 bytes, each represented by a `uint32_t w[N]`
  struct. Thus all four types have 4-byte alignment and identical value semantics;
  the differences tested here are **payload size and stride**. No overloaded
  operators, nontrivial C++ constructors, pointer ownership, or over-aligned types.
- Array lengths: 8, 128, 8,192, 262,144 elements.
- Workloads (six):
  - `grow`: append all items starting from zero capacity, includes realloc and free
    in timing. Checksums of selected array elements prevent dead-store elimination.
  - `reserved`: reserve N **outside** measurement, then reset count and append N
    items each repetition, without reallocations in the hot loop.
  - `indexed`: sum first word using a bounds-checked accessor for each sequential index.
  - `random`: sum first word using a bounds-checked accessor and precomputed
    pseudorandom index array, prepared outside timing.
  - `direct`: sum first word by direct typed pointer indexing; bypass accessor.
  - `mutate`: increment first word through bounds-checked accessor, then verify
    the final array state using a checksum outside timing.
- Total primary matrix: 5 variants × 2 compilers × 4 types × 4 lengths × 6
  workloads = **960 measured configurations**. Each has 5 timing samples.
- Extra shared-growth fast-path matrix: 2 paired variants × 2 compilers ×
  4 types × 4 lengths × 6 workloads = **384 paired configurations** with
  5 timing samples each.

## Hardware, compiler flags, and measurement method

- Linux virtualized AMD EPYC 9V74 environment (shared host). CPU affinity
  pinned to CPU 0, when permitted. The virtual machine is not an isolated
  hardware benchmarking rig: observed numbers vary and occasional outliers occur.
- Clang 17.0.0 and GCC 14.2.0 on x86-64.
- C11 for C variants, C++20 for C++ variant.
- `-O2 -DNDEBUG`, no `-march=native`, no LTO, no sanitizers or profile-guided optimization.
- One translation unit (unity style) in every executable, no STL includes.
- Internal `clock_gettime(CLOCK_MONOTONIC_RAW)` around timed work; compilation,
  process startup, source-data initialization, index generation, most cleanup,
  and output are excluded. For `grow` **free IS included** in timing.
- Repetitions are calibrated per scenario to yield approximately 30 ms for
  the slowest variant (some very small and large cases differ). Five runs per
  variant are executed in varying order, and **medians** are reported.
- Runtime checksums are compared across variants at exactly the same repetition
  count to verify equivalent observable work.
- An empty inline assembly statement with a memory clobber at the end of each
  repetition prevents compilers from treating the array content as unobservable.
- Measured times are normalized by `repetitions × array length` and presented
  as **nanoseconds per element operation**. Some vectorized loops legitimately
  process multiple elements per CPU cycle.
- Memory-cache behavior, allocator implementation, CPU contention, instruction
  layout and compiler codegen affect the results. A kernel, a non-virtualized
  workstation or a different allocator may produce different answers.
- All `indexed`, `random` and `direct` operations inspect only the first 32-bit
  word of each struct, not all payload bytes. This deliberately measures stride
  and access overhead rather than bulk element hashing.

## How to reproduce

```sh
./build.sh
python3 run.py clang --samples 5 --target-ms 30
python3 run.py gcc --samples 5 --target-ms 30
python3 fastpath.py
python3 analyze.py
```

The benchmark runner writes `results_clang.json` and `results_gcc.json`.
`fastpath.py` writes `fastpath_results.json`; `analyze.py` writes CSVs and
`summary.md`. A longer spot check is available with `python3 spotcheck.py`.

Example single case:

```sh
./bin/clang_0 2 16 8192 1000    # C specialized, reserved append, 16B, N=8192
./bin/clang_1 2 16 8192 1000    # Hooper out-of-line
./bin/clang_5 2 16 8192 1000    # Hooper shared-growth inline fast path
```

Output is `elapsed_nanoseconds checksum`. All three checksums must match.

## Interpretation caveats

The geometry of these numbers is highly workload dependent. The results should
not be averaged into one overall 'best container' ranking unless real workload
frequencies are known. The fastest C and C++ template variants can be
optimized into SIMD or streaming copy loops. Hooper variant 1 preserves
one shared backend but makes a real function call for every element.
Variant 5 preserves **one shared allocation/growth function** while inlining
only the cheap typed operations, a different trade-off from variant 3 where
inlining the whole generic backend permits code specialization.

For larger 256-byte values, GCC sometimes emits much better code for byte copies
than for by-value struct assignments. Some differences reverse with Clang,
and longer spot checks demonstrate significant variability in these particular
copying benchmarks. See `spotcheck_results.json`.

This is a synthetic dynamic-array benchmark; it does **not** measure hash maps,
lookup collisions, pointer-heavy containers, custom arenas, multithreaded
performance, or runtime on the user's actual hardware.

Further reading: Daniel Hooper, [Type Safe Generic Data Structures in C](https://danielchasehooper.com/posts/typechecked-generic-c-data-structures/).

## Ancillary 120-type compilation comparison

To connect the runtime optimization with the previous 120-type compilation
experiment, `compile_120.py` compiles four of the exact same 120-type worker
source variants in `compile_120_sources/` with `-O0` and `-O2`, and reports
median compile-to-object wall times. These measurements include compiler
process startup; five samples for `-O0`, three for `-O2`.

```sh
python3 compile_120.py
```

Results in `compile_120_results.json`. Key medians (ms):

| Compiler / optimization | C includes | Hooper shared | Hooper shared-growth fast path | C++ templates |
|---|---:|---:|---:|---:|
| Clang -O0 | 136.3 | 72.9 | 83.7 | 154.4 |
| Clang -O2 | 1569.7 | 800.1 | 1211.2 | 1593.8 |
| GCC -O0 | 278.6 | 147.8 | 181.4 | 334.5 |
| GCC -O2 | 1245.5 | 768.1 | 950.2 | 1352.4 |

The **shared-growth fast path** compiled approximately 23% faster than
C includes with Clang `-O2` and 24% faster with GCC `-O2` in this
120-type comparison, though slower than the fully out-of-line raw backend.
The exact source for the compilation experiment is packaged separately
under `compile_120_sources`. Runtime results remain a distinct experiment.
