# Runtime benchmark v2

## Geometric mean ratio against include-generated C arrays

16 cases (four sizes x four lengths) per compiler and workload, equal weights. Smaller is faster.

These ratios are **descriptive**, not a composite ranking: real workload frequencies are unknown.

### clang (-O2)

| Workload | C_include_specialized | C_Hooper_forced_shared | C_Hooper_shared_inline_index | C_Hooper_force_inline_backend | Cpp_template | C_Hooper_macro_typed_fastpath_noipa_growth | C_Hooper_idiomatic_static_inline_small_helpers | C_Hooper_idiomatic_static_small_helpers_no_hint |
|---|---|---|---|---|---|---|---|---|
| grow | 1.00× | 2.95× | 2.96× | 1.01× | 0.96× | 0.97× | 1.09× | 1.05× |
| reserved | 1.00× | 4.66× | 4.38× | 1.24× | 1.04× | 1.05× | 1.16× | 1.07× |
| indexed | 1.00× | 5.97× | 0.99× | 1.02× | 1.00× | 1.05× | 1.08× | 1.07× |
| random | 1.00× | 2.96× | 1.10× | 1.06× | 1.01× | 1.04× | 1.11× | 1.11× |
| direct | 1.00× | 0.99× | 1.02× | 0.94× | 0.99× | 1.02× | 0.99× | 1.00× |
| mutate | 1.00× | 4.95× | 1.16× | 1.14× | 0.98× | 1.19× | 0.99× | 0.98× |

### clang representative times for 16 bytes, N=8192

| Workload | C_include_specialized | C_Hooper_forced_shared | C_Hooper_shared_inline_index | C_Hooper_force_inline_backend | Cpp_template | C_Hooper_macro_typed_fastpath_noipa_growth | C_Hooper_idiomatic_static_inline_small_helpers | C_Hooper_idiomatic_static_small_helpers_no_hint |
|---|---|---|---|---|---|---|---|---|
| grow | 0.560 ns | 5.118 ns | 4.947 ns | 0.621 ns | 0.471 ns | 0.681 ns | 0.656 ns | 0.688 ns |
| reserved | 0.452 ns | 5.107 ns | 5.201 ns | 0.622 ns | 0.388 ns | 0.634 ns | 0.627 ns | 0.631 ns |
| indexed | 0.226 ns | 1.840 ns | 0.267 ns | 0.227 ns | 0.235 ns | 0.210 ns | 0.233 ns | 0.243 ns |
| random | 0.585 ns | 1.768 ns | 0.568 ns | 0.599 ns | 0.618 ns | 0.537 ns | 0.584 ns | 0.554 ns |
| direct | 0.216 ns | 0.215 ns | 0.217 ns | 0.216 ns | 0.219 ns | 0.213 ns | 0.217 ns | 0.214 ns |
| mutate | 0.305 ns | 1.777 ns | 0.602 ns | 0.632 ns | 0.309 ns | 0.589 ns | 0.291 ns | 0.298 ns |

### clang representative times for 64 bytes, N=128

| Workload | C_include_specialized | C_Hooper_forced_shared | C_Hooper_shared_inline_index | C_Hooper_force_inline_backend | Cpp_template | C_Hooper_macro_typed_fastpath_noipa_growth | C_Hooper_idiomatic_static_inline_small_helpers | C_Hooper_idiomatic_static_small_helpers_no_hint |
|---|---|---|---|---|---|---|---|---|
| grow | 2.681 ns | 8.242 ns | 8.304 ns | 2.624 ns | 2.534 ns | 1.580 ns | 2.563 ns | 2.598 ns |
| reserved | 2.526 ns | 8.417 ns | 8.367 ns | 2.368 ns | 2.301 ns | 1.526 ns | 2.351 ns | 2.313 ns |
| indexed | 0.223 ns | 1.892 ns | 0.213 ns | 0.224 ns | 0.225 ns | 0.229 ns | 0.217 ns | 0.216 ns |
| random | 0.513 ns | 1.784 ns | 0.599 ns | 0.507 ns | 0.541 ns | 0.441 ns | 0.499 ns | 0.513 ns |
| direct | 0.223 ns | 0.222 ns | 0.244 ns | 0.227 ns | 0.227 ns | 0.233 ns | 0.223 ns | 0.234 ns |
| mutate | 0.304 ns | 1.783 ns | 0.353 ns | 0.313 ns | 0.305 ns | 0.352 ns | 0.302 ns | 0.295 ns |

### clang representative times for 256 bytes, N=8192

| Workload | C_include_specialized | C_Hooper_forced_shared | C_Hooper_shared_inline_index | C_Hooper_force_inline_backend | Cpp_template | C_Hooper_macro_typed_fastpath_noipa_growth | C_Hooper_idiomatic_static_inline_small_helpers | C_Hooper_idiomatic_static_small_helpers_no_hint |
|---|---|---|---|---|---|---|---|---|
| grow | 19.947 ns | 19.026 ns | 18.976 ns | 19.087 ns | 20.397 ns | 11.343 ns | 14.119 ns | 13.948 ns |
| reserved | 11.866 ns | 13.171 ns | 12.301 ns | 11.958 ns | 17.689 ns | 8.383 ns | 16.507 ns | 16.684 ns |
| indexed | 0.920 ns | 2.136 ns | 0.885 ns | 0.937 ns | 0.816 ns | 0.903 ns | 0.993 ns | 0.838 ns |
| random | 0.996 ns | 2.159 ns | 1.259 ns | 1.012 ns | 0.988 ns | 1.267 ns | 1.059 ns | 0.975 ns |
| direct | 0.804 ns | 0.825 ns | 0.827 ns | 0.832 ns | 0.820 ns | 0.835 ns | 0.835 ns | 0.830 ns |
| mutate | 0.926 ns | 1.774 ns | 0.918 ns | 0.937 ns | 0.942 ns | 0.927 ns | 0.953 ns | 0.927 ns |

### gcc (-O2)

| Workload | C_include_specialized | C_Hooper_forced_shared | C_Hooper_shared_inline_index | C_Hooper_force_inline_backend | Cpp_template | C_Hooper_macro_typed_fastpath_noipa_growth | C_Hooper_idiomatic_static_inline_small_helpers | C_Hooper_idiomatic_static_small_helpers_no_hint |
|---|---|---|---|---|---|---|---|---|
| grow | 1.00× | 3.03× | 3.03× | 1.21× | 0.98× | 1.04× | 1.03× | 2.83× |
| reserved | 1.00× | 4.06× | 4.06× | 0.79× | 0.97× | 1.61× | 1.22× | 4.12× |
| indexed | 1.00× | 2.66× | 0.90× | 0.88× | 1.03× | 0.94× | 0.87× | 0.92× |
| random | 1.00× | 2.59× | 0.97× | 0.96× | 1.02× | 1.02× | 0.99× | 0.93× |
| direct | 1.00× | 1.02× | 1.23× | 0.95× | 0.98× | 1.05× | 0.93× | 0.96× |
| mutate | 1.00× | 3.25× | 1.01× | 0.98× | 1.00× | 1.01× | 0.99× | 0.99× |

### gcc representative times for 16 bytes, N=8192

| Workload | C_include_specialized | C_Hooper_forced_shared | C_Hooper_shared_inline_index | C_Hooper_force_inline_backend | Cpp_template | C_Hooper_macro_typed_fastpath_noipa_growth | C_Hooper_idiomatic_static_inline_small_helpers | C_Hooper_idiomatic_static_small_helpers_no_hint |
|---|---|---|---|---|---|---|---|---|
| grow | 0.579 ns | 5.399 ns | 5.484 ns | 1.127 ns | 0.480 ns | 0.700 ns | 0.642 ns | 7.952 ns |
| reserved | 0.460 ns | 5.681 ns | 5.176 ns | 0.299 ns | 0.426 ns | 0.725 ns | 0.475 ns | 7.808 ns |
| indexed | 0.582 ns | 1.462 ns | 0.412 ns | 0.421 ns | 0.580 ns | 0.423 ns | 0.408 ns | 0.417 ns |
| random | 0.591 ns | 1.779 ns | 0.594 ns | 0.518 ns | 0.604 ns | 0.596 ns | 0.506 ns | 0.526 ns |
| direct | 0.572 ns | 0.617 ns | 0.636 ns | 0.533 ns | 0.517 ns | 0.552 ns | 0.464 ns | 0.579 ns |
| mutate | 0.429 ns | 1.461 ns | 0.433 ns | 0.418 ns | 0.445 ns | 0.427 ns | 0.429 ns | 0.432 ns |

### gcc representative times for 64 bytes, N=128

| Workload | C_include_specialized | C_Hooper_forced_shared | C_Hooper_shared_inline_index | C_Hooper_force_inline_backend | Cpp_template | C_Hooper_macro_typed_fastpath_noipa_growth | C_Hooper_idiomatic_static_inline_small_helpers | C_Hooper_idiomatic_static_small_helpers_no_hint |
|---|---|---|---|---|---|---|---|---|
| grow | 1.558 ns | 9.700 ns | 10.030 ns | 2.773 ns | 1.541 ns | 2.324 ns | 2.715 ns | 9.073 ns |
| reserved | 1.130 ns | 8.159 ns | 7.549 ns | 9.699 ns | 1.169 ns | 33.048 ns | 10.714 ns | 13.264 ns |
| indexed | 0.574 ns | 1.444 ns | 0.424 ns | 0.400 ns | 0.568 ns | 0.585 ns | 0.400 ns | 0.582 ns |
| random | 0.600 ns | 1.706 ns | 0.425 ns | 0.565 ns | 0.599 ns | 0.624 ns | 0.427 ns | 0.436 ns |
| direct | 0.505 ns | 0.490 ns | 0.612 ns | 0.476 ns | 0.489 ns | 0.605 ns | 0.479 ns | 0.493 ns |
| mutate | 0.406 ns | 1.744 ns | 0.402 ns | 0.447 ns | 0.405 ns | 0.399 ns | 0.407 ns | 0.404 ns |

### gcc representative times for 256 bytes, N=8192

| Workload | C_include_specialized | C_Hooper_forced_shared | C_Hooper_shared_inline_index | C_Hooper_force_inline_backend | Cpp_template | C_Hooper_macro_typed_fastpath_noipa_growth | C_Hooper_idiomatic_static_inline_small_helpers | C_Hooper_idiomatic_static_small_helpers_no_hint |
|---|---|---|---|---|---|---|---|---|
| grow | 16.007 ns | 17.874 ns | 18.432 ns | 14.096 ns | 14.440 ns | 11.517 ns | 15.142 ns | 18.793 ns |
| reserved | 27.538 ns | 15.585 ns | 16.321 ns | 11.953 ns | 27.984 ns | 11.142 ns | 11.230 ns | 14.609 ns |
| indexed | 0.997 ns | 1.487 ns | 0.879 ns | 0.919 ns | 0.970 ns | 0.954 ns | 0.887 ns | 0.921 ns |
| random | 1.119 ns | 1.413 ns | 1.167 ns | 1.142 ns | 1.119 ns | 1.147 ns | 1.155 ns | 1.152 ns |
| direct | 1.041 ns | 0.942 ns | 0.985 ns | 0.992 ns | 1.050 ns | 1.090 ns | 0.942 ns | 0.949 ns |
| mutate | 0.879 ns | 1.703 ns | 0.959 ns | 0.916 ns | 0.893 ns | 0.889 ns | 0.890 ns | 0.973 ns |

## Notes

- Macros / C templates C++ and Hooper variants are all separate single-translation-unit builds.
- All 8 were compared in the same interleaved randomized trials per case with identical repetitions and checksums.
- Compiler-generated specialization, dynamic allocation, copy size, cache effects and measurement variance affect results.
- In particular, 256B assignment vs memcpy may produce codegen surprises.

## Compile times (120 types)

| Compiler | Opt | C Hooper forced shared | C Hooper idiomatic inline | C Hooper idiomatic no hint | C Hooper macro fast path | C includes | C++ templates |
|---|---|---|---|---|---|---|---|---|
| clang | -O0 | 73.2 ms | 75.4 ms | 72.8 ms | 91.4 ms | 129.0 ms | 148.3 ms |
| clang | -O2 | 831.3 ms | 1268.3 ms | 1342.8 ms | 1237.1 ms | 1518.8 ms | 1572.3 ms |
| gcc | -O0 | 146.9 ms | 151.4 ms | 156.4 ms | 175.4 ms | 280.0 ms | 369.6 ms |
| gcc | -O2 | 807.3 ms | 1025.7 ms | 1061.1 ms | 988.6 ms | 1219.4 ms | 1352.2 ms |
