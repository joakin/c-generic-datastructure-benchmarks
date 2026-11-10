# C vs minimal C++ vs Hooper-style C: unity-build compile-time benchmark

This is a fresh, reproducible synthetic benchmark generated in November 2026.
It follows a prior conversation exploring 120 distinct type specializations, and adds a
Hooper-style C typed-union wrapper with a single byte-oriented implementation.

## Approaches

- `plain.c` and `plain.cpp`: the same C-compatible implementation, using a fixed
  128-element local array instead of a generic growing container. Baseline only:
  unlike the other four cases, the array is neither heap-allocated nor growable.
- `c_includes.c`: 120 distinct typed arrays produced via 120 includes of
  `typed_array.inc`. Each specialization has its own `push` and `at` functions.
- `c_hooper.c`: 120 types defined using `typedef Array(ItemNNN) ItemNNNArray;`
  where `Array(T)` is a union containing a raw array handle and a phantom typed
  pointer. A macro checks the element type with `__typeof__` and passes its bytes
  to a *single* `raw_push` implementation. Bounds-checked `raw_at` is likewise
  shared. These two functions are deliberately marked `noinline` to maintain one
  shared codegen implementation (rather than optimizer cloning/inlining it).
- `cpp_template.cpp`: `template<class T> struct Array` with typed `push` and `at`
  methods. No C++ STL containers, exceptions, or inheritance.
- `cpp_stl.cpp`: identical template code, but also includes unused `<vector>`,
  `<algorithm>`, `<unordered_map>` to measure header-processing overhead.

Each non-baseline implementation doubles capacity as needed, appends by value,
checks bounds for indexed access, reads the same fields and frees its allocation.
Each `ItemNNN` contains 4 `uint32_t` fields (16-byte type, 4-byte alignment).
Each worker pushes 17–20 elements and sums the data, which is printed to prevent
trivial removal of computations. All tested executables printed the same result.

## Environment and measurement

- Linux, x86-64, AMD EPYC 9V74 virtual machine
- Clang 17.0.0 (Swift toolchain), GCC 14.2.0
- C11 and C++20
- Single translation unit per variant
- `-fsyntax-only`, `-O0 -c`, `-O2 -c` (no link phase); `-O0` has **no** `-g` flag
- Wall-clock time measured using Python `time.perf_counter` for each subprocess
- Median of 5 timings for `-fsyntax-only`/`-O0`; 3 for `-O2`
- Warm filesystem cache; shared virtual machine; millisecond-level noise
- Compilation includes compiler-process startup; no PCH, C++ modules, LTO, or sanitizers

| 120 types (ms) | Clang syntax | Clang O0 | Clang O2 | GCC syntax | GCC O0 | GCC O2 |
|---|---:|---:|---:|---:|---:|---:|
| Plain C baseline | 33.6 | 53.4 | 881.3 | 17.8 | 125.8 | 692.1 |
| Same plain code in C++ | 63.4 | 77.1 | 907.5 | 39.5 | 144.4 | 728.4 |
| C repeated includes | 55.3 | 116.8 | 1652.2 | 26.8 | 291.1 | 1243.7 |
| C Hooper shared backend | 42.9 | 69.2 | 823.2 | 20.1 | 151.4 | 761.9 |
| C++ template arrays | 80.9 | 136.3 | 1574.4 | 55.7 | 342.1 | 1338.4 |
| C++ templates + STL headers | 333.6 | 381.0 | 1997.7 | 256.3 | 528.2 | 1458.3 |

At `-O0`, scaling examples (ms):

| Type count | Clang C includes | Clang Hooper | Clang C++ templates | GCC C includes | GCC Hooper | GCC C++ templates |
|---|---:|---:|---:|---:|---:|---:|
| 30 | 44.4 | 35.0 | 57.4 | 90.9 | 55.9 | 110.3 |
| 120 | 116.8 | 69.2 | 136.3 | 291.1 | 151.4 | 342.1 |
| 240 | 205.6 | 130.1 | 272.3 | 590.1 | 269.2 | 638.3 |

Object-file `.text` for 120 types at `-O2` (byte counts via `size`):

| Variant | Clang text bytes | GCC text bytes |
|---|---:|---:|
| C includes | 50,936 | 39,976 |
| C Hooper | 24,277 | 37,128 |
| C++ templates | 50,936 | 39,938 |

## Reproduce

In this directory:

```sh
python3 generate.py 120
python3 bench.py 120 clang -O0 5
python3 bench.py 120 gcc -O2 3

# Test the programs and compare their printed checksums
cd generated_120
clang -std=c11 -O2 c_includes.c -o /tmp/c-includes && /tmp/c-includes
clang -std=c11 -O2 c_hooper.c -o /tmp/c-hooper && /tmp/c-hooper
clang++ -std=c++20 -O2 cpp_template.cpp -o /tmp/cpp-template && /tmp/cpp-template
```

The generator writes a full source file for each variant. The benchmark script
writes median timings and individual samples into `results.json`.

## Interpretation / trade-offs

- The Hooper design reduces actual code generation by sharing its runtime backend.
- This is not a cost-free alternative to specializing: calling a non-inlined
  byte-oriented function with runtime element width can reduce runtime inlining,
  vectorization and constant propagation. Runtime throughput is **not** benchmarked here.
- The Hooper union is a compile-time type witness, not a union for type punning.
- `__typeof__` is a GCC/Clang extension under C11; `typeof` is standard in C23.
- Hooper raw `realloc` is sufficiently aligned for these `uint32_t`-based types,
  but production generic containers must address alignment, overflow and API design.
- C++ templates and typed-C include specialization are both type-specific backends,
  so comparing to the shared backend does not isolate only the language's overhead.
- Same *usage* operation, but not identical machine code or runtime performance.
- Optimized codegen can vary dramatically even when source semantics match;
  results are not universal ratios for an arbitrary game/codebase.

Source inspiration: Daniel Hooper, *Type Safe Generic Data Structures in C*,
https://danielchasehooper.com/posts/typechecked-generic-c-data-structures/
