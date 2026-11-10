# C generic data structure benchmarks

How much do generic containers cost to compile and run?

This project compares six ways to write a dynamic array in C and C++. It also tests two extra variants to understand inlining. The focus is on **single translation unit (unity) builds** and plain, low-level code.

The main question is whether [Daniel Hooper's type-checked C generics](https://danielchasehooper.com/posts/typechecked-generic-c-data-structures/) can keep most of the runtime speed of per-type generated code while compiling faster.

## Results at a glance

Compile time for **120 element types**, `-O2`, in seconds (lower is better):

| Implementation | Clang 17 | GCC 14 |
| --- | ---: | ---: |
| C, generated implementation per type | 1.519 | 1.219 |
| C++20 templates (no STL containers) | 1.572 | 1.352 |
| C, shared backend, inlining disabled | **0.831** | **0.807** |
| C, shared backend + typed macro fast path | 1.237 | 0.989 |
| **C, idiomatic Hooper-style** | **1.268** | **1.026** |
| C, idiomatic version without `inline` hints | 1.343 | 1.061 |

Runtime for the **idiomatic Hooper-style** array relative to per-type generated C, using Clang 17 `-O2` (1.00× is equal; higher is slower):

| Operation | Relative time |
| --- | ---: |
| Grow and append | 1.09× |
| Append with capacity reserved | 1.16× |
| Sequential indexed read | 1.08× |
| Random indexed read | 1.11× |
| Direct pointer iteration | 0.99× |
| Indexed mutation | 0.99× |

These runtime figures are geometric means across four element sizes and four array lengths. They **do not** predict the performance of a real application. Some individual cases are much slower, including GCC's 64-byte reserved-append case. See [RESULTS.md](RESULTS.md) and the raw data for details.

## Implementations

- **Generated C:** `#include` a parametrized implementation once for each element type.
- **C++ templates:** instantiate a small `Array<T>` with no STL container dependencies.
- **Hooper, shared:** one byte-oriented implementation for every type; inlining deliberately disabled for this control case.
- **Hooper, inline access:** shared push, but a typed inline indexing operation.
- **Hooper, forced inline:** a shared source implementation with forced inlining so the optimizer can specialize it.
- **Hooper, macro fast path:** typed macro for the frequent append path; shared growth function.
- **Hooper, idiomatic:** type-witness union and thin typed macros, small `static inline` helpers, normal out-of-line reserve/growth functions. **No forced-inline or noinline attributes.**
- **Hooper, no inline hint:** same idiomatic code, but small helpers are `static` instead of `static inline`.

The last two are the most relevant comparison for ordinary C coding. The fully shared control isn't simply a version without the `inline` keyword: it explicitly prevents the optimizer from inlining the backend.

## Run the tests

Requires **Linux**, Python 3, Clang, GCC, and a C/C++ standard library. The recorded runs used Clang 17 and GCC 14.

Run a quick correctness check across all eight runtime variants:

```sh
sh scripts/smoke-test.sh
```

Run all benchmarks (this takes longer and **overwrites local result files**):

```sh
sh scripts/reproduce-all.sh
```

Or run the latest runtime benchmark alone:

```sh
cd experiments/runtime-v2
sh build.sh
python3 run_v2.py --samples 5 --target-ms 15
python3 analyze_v2.py
```

The code uses `__typeof__` in C11 mode (GCC/Clang extension; `typeof` is standard in C23). The runtime runner also uses Linux timing and CPU-affinity APIs.

## Files

| Path | What it contains |
| --- | --- |
| [`experiments/compile-generics/`](experiments/compile-generics/) | Compile-time tests with 30, 120, and 240 element types, generators, source code, and results. |
| [`experiments/runtime-v1/`](experiments/runtime-v1/) | First runtime benchmark: six implementations, raw results, spot checks, compilation measurements. |
| [`experiments/runtime-v2/`](experiments/runtime-v2/) | Latest runtime benchmark: eight implementations, the idiomatic variants, raw samples, code-size and compilation results. |
| [`experiments/runtime-v2/hooper_array.h`](experiments/runtime-v2/hooper_array.h) | Standalone Hooper-style array interface. |
| [`experiments/runtime-v2/hooper_array.c`](experiments/runtime-v2/hooper_array.c) | Shared allocation and growth implementation. |
| [`RESULTS.md`](RESULTS.md) | More results and interpretation. |

The generated C sources are committed so you can inspect the exact code used for measurements. Scripts can regenerate them. Compiled binaries are not included.

## Caveats

- The benchmark uses synthetic, trivially copyable 4-, 16-, 64-, and 256-byte structs and arrays of 8 to 262,144 elements.
- All timings came from a shared virtualized Linux machine. Repeat them on your own hardware before making design choices.
- The test does not cover over-aligned types, ownership, or a custom arena allocator.
- Inlining is a compiler decision unless explicitly disabled or forced. A single shared function in source code might still become several specialized paths in machine code.

Inspired by Daniel Hooper's article above; the code here is an independent experiment, not a copy of his library.

No license has been selected.
