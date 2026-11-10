#!/usr/bin/env python3
"""Summarize benchmark output without third-party Python dependencies."""
import csv,json,math,statistics
from pathlib import Path
ROOT=Path(__file__).resolve().parent
rows=[]
for c in ('clang','gcc'):
    rows+=json.loads((ROOT/f'results_{c}.json').read_text())
lookup={(r['compiler'],r['workload'],r['bytes'],r['length'],r['variant']):r for r in rows}
for r in rows:
    base=lookup[(r['compiler'],r['workload'],r['bytes'],r['length'],0)]['median_ns_per_op']
    r['ratio_vs_c_include']=r['median_ns_per_op']/base
with (ROOT/'summary.csv').open('w',newline='') as f:
    out=csv.DictWriter(f,fieldnames=['compiler','variant','implementation','workload','bytes','length','reps','median_ns_per_op','min_ns_per_op','max_ns_per_op','ratio_vs_c_include'])
    out.writeheader();out.writerows({k:r[k] for k in out.fieldnames} for r in rows)
with (ROOT/'samples.csv').open('w',newline='') as f:
    out=csv.writer(f);out.writerow(['compiler','variant','workload','bytes','length','reps','sample','ns_per_op','elapsed_ns'])
    for r in rows:
        for i,(ns, t) in enumerate(zip(r['samples_ns_per_op'],r['samples_ns']),1):
            out.writerow([r['compiler'],r['variant'],r['workload'],r['bytes'],r['length'],r['reps'],i,ns,t])
works=['grow','reserved','indexed','random','direct','mutate']
variant_names=['C includes','Hooper shared','Hooper inline index','Hooper inline backend','C++ template']
text=['# Runtime benchmark result summary','', '## Geometric mean ratio against specialized C, equally weighted across 16 size/length cases','',
    'Values >1 are slower than specialized C; <1 faster. 1.00 is approximately equal.','']
for c in ('clang','gcc'):
    text.extend([f'### {c.capitalize()} -O2','', '| Operation | C specialized | Hooper shared | Hooper inline index | Hooper inline backend | C++ templates |', '|---|---:|---:|---:|---:|---:|'])
    for w in works:
        entries=[]
        for v in range(5):
            samples=[r['ratio_vs_c_include'] for r in rows if r['compiler']==c and r['workload']==w and r['variant']==v]
            entries.append(math.exp(statistics.mean([math.log(x) for x in samples])))
        text.append('| '+w+' | '+' | '.join(f'{x:.2f}x' for x in entries)+' |')
    text.append('')
text.extend(['## Representative absolute times (ns per operation), 16-byte elements and 8192 items','',
             '| Compiler | Operation | C includes | Hooper shared | Hooper inline index | Hooper inline backend | C++ templates |','|---|---|---:|---:|---:|---:|---:|'])
for c in ('clang','gcc'):
    for w in works:
        entries=[lookup[(c,w,16,8192,v)]['median_ns_per_op'] for v in range(5)]
        text.append('| '+c+' | '+w+' | '+' | '.join(f'{x:.3f}' for x in entries)+' |')
text.extend(['','## Representative absolute times (ns per operation), 256-byte elements and 8192 items','',
             '| Compiler | Operation | C includes | Hooper shared | Hooper inline index | Hooper inline backend | C++ templates |','|---|---|---:|---:|---:|---:|---:|'])
for c in ('clang','gcc'):
    for w in works:
        entries=[lookup[(c,w,256,8192,v)]['median_ns_per_op'] for v in range(5)]
        text.append('| '+c+' | '+w+' | '+' | '.join(f'{x:.3f}' for x in entries)+' |')
text.extend(['','## Notes','',
'- These are synthetic microbenchmarks on an oversubscribed/shared VM, not performance guarantees on a specific application.',
'- No runtime conclusion follows from averaging all six workloads: real-world access frequency and allocator choices dominate.',
'- Hooper inline backend might get specialized by the compiler, trading away its earlier compile-time advantage.',
'- `grow` includes malloc/realloc/free; `reserved` excludes allocation from timing.',
'- High-size 256B copies sometimes favor raw `memcpy` over compiler-generated typed assignments; results are compiler-dependent.',
'- See README.md for detailed methodology and source for each variant.',''])
(ROOT/'summary.md').write_text('\n'.join(text))
print('Wrote summary.csv samples.csv summary.md')
if (ROOT/'fastpath_results.json').exists():
    fast=json.loads((ROOT/'fastpath_results.json').read_text())
    with (ROOT/'fastpath_summary.csv').open('w',newline='') as f:
        keys=['compiler','workload','bytes','length','reps','baseline_median_ns','fastpath_median_ns','speed_ratio']
        out=csv.DictWriter(f,fieldnames=keys);out.writeheader();out.writerows({k:r[k] for k in keys} for r in fast)
    text=['# Hooper shared-growth / inline-hotpath variant (paired runs)', '',
          'Ratio vs include-generated C. Lower is faster; >1 is slower. 16 cases per workload (4 sizes × 4 lengths).','',
          '| Compiler | Workload | Geo. mean ratio | Minimum | Maximum |',
          '|---|---|---:|---:|---:|']
    for c in ['clang','gcc']:
        for w in works:
            xs=[r['speed_ratio'] for r in fast if r['compiler']==c and r['workload']==w]
            geom=math.exp(statistics.mean(math.log(x) for x in xs))
            text.append(f'| {c} | {w} | {geom:.2f}× | {min(xs):.2f}× | {max(xs):.2f}× |')
    text.extend(['','See `fastpath_summary.csv` for individual sizes, and `fastpath_results.json` for 5-sample timings.',
                 'N.B. A GCC -O2 64-byte reserved-append code generation cliff is an important outlier, not an input error.', ''])
    (ROOT/'fastpath_summary.md').write_text('\n'.join(text))
    print('Wrote fastpath_summary.csv fastpath_summary.md')
