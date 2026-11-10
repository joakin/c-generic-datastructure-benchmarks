# Result highlights

Full per-sample data is under each `experiments/*` directory. These figures reflect the measured setup, not general compiler guarantees.

## Compiler throughput, 120 types, single translation unit, `-O2`

Seconds, lower is better. The 2026-11-10 **v2** experimental run used five O0 samples / four O2 samples.

| Container | Clang 17 | GCC 14 |
|---|---:|---:|
| C include-generated specialization | 1.519 | 1.219 |
| C++20 templates, minimal subset | 1.572 | 1.352 |
| Hooper shared backend with forced out-of-line calls | **0.831** | **0.807** |
| Hooper shared grow + typed macro fast-path | 1.237 | 0.989 |
| **Hooper idiomatic `static inline` helpers** | **1.268** | **1.026** |
| Hooper idiomatic small helpers without inline hint | 1.343 | 1.061 |

**Why shared compiles fastest:** one implementation instead of 120 specialized ones, less frontend and optimizer work. The v1/v2 shared-backend benchmarks deliberately prevent inlining (Clang `noinline`, GCC `noipa`); this is not how the idiomatic implementation behaves.

Data: `experiments/runtime-v2/compile_v2.json`; earlier measurements including 30 and 240 types: `experiments/compile-generics/results.json`.

## Runtime, Clang 17 (`-O2`)

Geometric-mean slowdown vs per-type generated C, across 4 element sizes × 4 array lengths per operation. Smaller is faster. The numbers here use the **v2 full matrix**.

| Operation | Shared out-of-line | Idiomatic static inline |
|---|---:|---:|
| Grow and append | 2.95× | 1.09× |
| Append reserved | 4.66× | 1.16× |
| Sequential indexed read | 5.97× | 1.08× |
| Random indexed read | 2.96× | 1.11× |
| Direct pointer iteration | 0.99× | 0.99× |
| Indexed mutation | 4.95× | 0.99× |

Data: `experiments/runtime-v2/results_v2.json`, `results_v2.csv`, `samples_v2.csv`, `summary_v2.md`, `spotcheck_v2.json`.

A caution: the 64-byte reserved-append case with GCC at 128 elements shows a substantial codegen regression for the generic `memcpy` path. The detailed spot checks preserve these outliers rather than hide them.

See the READMEs in each experiment for full methodology and GCC runtime results, and rerun on your own hardware before choosing a container design.
