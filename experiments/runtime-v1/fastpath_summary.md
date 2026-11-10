# Hooper shared-growth / inline-hotpath variant (paired runs)

Ratio vs include-generated C. Lower is faster; >1 is slower. 16 cases per workload (4 sizes × 4 lengths).

| Compiler | Workload | Geo. mean ratio | Minimum | Maximum |
|---|---|---:|---:|---:|
| clang | grow | 1.06× | 0.62× | 1.91× |
| clang | reserved | 1.03× | 0.36× | 2.03× |
| clang | indexed | 1.07× | 0.71× | 1.41× |
| clang | random | 1.02× | 0.78× | 1.35× |
| clang | direct | 1.03× | 0.96× | 1.21× |
| clang | mutate | 1.22× | 0.82× | 2.00× |
| gcc | grow | 1.07× | 0.56× | 1.41× |
| gcc | reserved | 1.67× | 0.25× | 27.33× |
| gcc | indexed | 0.94× | 0.65× | 1.20× |
| gcc | random | 1.00× | 0.90× | 1.10× |
| gcc | direct | 1.04× | 0.88× | 1.64× |
| gcc | mutate | 1.01× | 0.92× | 1.10× |

See `fastpath_summary.csv` for individual sizes, and `fastpath_results.json` for 5-sample timings.
N.B. A GCC -O2 64-byte reserved-append code generation cliff is an important outlier, not an input error.
