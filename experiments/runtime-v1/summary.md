# Runtime benchmark result summary

## Geometric mean ratio against specialized C, equally weighted across 16 size/length cases

Values >1 are slower than specialized C; <1 faster. 1.00 is approximately equal.

### Clang -O2

| Operation | C specialized | Hooper shared | Hooper inline index | Hooper inline backend | C++ templates |
|---|---:|---:|---:|---:|---:|
| grow | 1.00x | 3.23x | 3.19x | 1.05x | 1.01x |
| reserved | 1.00x | 4.72x | 4.46x | 1.22x | 1.00x |
| indexed | 1.00x | 5.92x | 0.99x | 1.02x | 1.01x |
| random | 1.00x | 2.97x | 1.10x | 1.06x | 1.00x |
| direct | 1.00x | 1.00x | 0.98x | 0.93x | 0.99x |
| mutate | 1.00x | 5.10x | 1.15x | 1.18x | 0.99x |

### Gcc -O2

| Operation | C specialized | Hooper shared | Hooper inline index | Hooper inline backend | C++ templates |
|---|---:|---:|---:|---:|---:|
| grow | 1.00x | 3.24x | 3.18x | 1.25x | 1.00x |
| reserved | 1.00x | 4.29x | 4.39x | 0.80x | 1.01x |
| indexed | 1.00x | 2.64x | 0.89x | 0.86x | 1.01x |
| random | 1.00x | 2.49x | 0.93x | 0.90x | 0.95x |
| direct | 1.00x | 1.03x | 1.27x | 0.97x | 1.00x |
| mutate | 1.00x | 3.30x | 1.01x | 0.97x | 1.00x |

## Representative absolute times (ns per operation), 16-byte elements and 8192 items

| Compiler | Operation | C includes | Hooper shared | Hooper inline index | Hooper inline backend | C++ templates |
|---|---|---:|---:|---:|---:|---:|
| clang | grow | 0.577 | 5.770 | 5.352 | 0.655 | 0.503 |
| clang | reserved | 0.395 | 5.345 | 5.302 | 0.822 | 0.449 |
| clang | indexed | 0.222 | 1.763 | 0.225 | 0.219 | 0.215 |
| clang | random | 0.534 | 1.885 | 0.522 | 0.633 | 0.528 |
| clang | direct | 0.251 | 0.242 | 0.219 | 0.229 | 0.232 |
| clang | mutate | 0.307 | 1.750 | 0.600 | 0.610 | 0.290 |
| gcc | grow | 0.516 | 5.107 | 5.127 | 0.919 | 0.485 |
| gcc | reserved | 0.461 | 5.457 | 5.197 | 0.311 | 0.449 |
| gcc | indexed | 0.586 | 1.463 | 0.426 | 0.421 | 0.594 |
| gcc | random | 0.595 | 1.793 | 0.635 | 0.492 | 0.585 |
| gcc | direct | 0.529 | 0.587 | 0.593 | 0.517 | 0.560 |
| gcc | mutate | 0.441 | 1.460 | 0.437 | 0.435 | 0.443 |

## Representative absolute times (ns per operation), 256-byte elements and 8192 items

| Compiler | Operation | C includes | Hooper shared | Hooper inline index | Hooper inline backend | C++ templates |
|---|---|---:|---:|---:|---:|---:|
| clang | grow | 16.638 | 12.091 | 16.557 | 10.291 | 17.467 |
| clang | reserved | 15.917 | 11.955 | 16.723 | 11.953 | 17.691 |
| clang | indexed | 0.867 | 1.747 | 0.877 | 0.880 | 0.861 |
| clang | random | 0.939 | 2.052 | 1.194 | 0.981 | 0.942 |
| clang | direct | 0.944 | 0.918 | 0.908 | 0.892 | 0.896 |
| clang | mutate | 0.990 | 1.814 | 1.023 | 1.014 | 0.993 |
| gcc | grow | 13.642 | 17.281 | 17.778 | 13.593 | 12.834 |
| gcc | reserved | 27.248 | 15.226 | 14.970 | 10.526 | 25.925 |
| gcc | indexed | 0.939 | 1.446 | 0.892 | 0.886 | 0.932 |
| gcc | random | 1.194 | 1.603 | 1.172 | 1.181 | 1.140 |
| gcc | direct | 0.923 | 0.836 | 0.837 | 0.827 | 0.912 |
| gcc | mutate | 0.944 | 1.475 | 0.931 | 0.915 | 0.892 |

## Notes

- These are synthetic microbenchmarks on an oversubscribed/shared VM, not performance guarantees on a specific application.
- No runtime conclusion follows from averaging all six workloads: real-world access frequency and allocator choices dominate.
- Hooper inline backend might get specialized by the compiler, trading away its earlier compile-time advantage.
- `grow` includes malloc/realloc/free; `reserved` excludes allocation from timing.
- High-size 256B copies sometimes favor raw `memcpy` over compiler-generated typed assignments; results are compiler-dependent.
- See README.md for detailed methodology and source for each variant.
