#!/usr/bin/env python3
"""Summarize exhaustive paired runtime benchmark and compile-time results."""
from pathlib import Path
import csv, json, math, statistics
ROOT=Path(__file__).resolve().parent
rows=json.loads((ROOT/'results_v2.json').read_text())
lookup={(r['compiler'],r['workload'],r['bytes'],r['length'],r['variant']):r for r in rows}
for r in rows:
 b=lookup[(r['compiler'],r['workload'],r['bytes'],r['length'],0)]['median_ns_per_op']
 r['ratio_vs_c_include']=r['median_ns_per_op']/b
 r['ratio_vs_hooper_fastpath']=r['median_ns_per_op']/lookup[(r['compiler'],r['workload'],r['bytes'],r['length'],5)]['median_ns_per_op']
with (ROOT/'results_v2.csv').open('w',newline='') as f:
 keys=['compiler','variant','implementation','workload','bytes','length','reps','median_ns_per_op','min_ns_per_op','max_ns_per_op','ratio_vs_c_include','ratio_vs_hooper_fastpath']
 w=csv.DictWriter(f,fieldnames=keys);w.writeheader();w.writerows({k:r[k] for k in keys} for r in rows)
with (ROOT/'samples_v2.csv').open('w',newline='') as f:
 w=csv.writer(f);w.writerow(['compiler','variant','workload','bytes','length','reps','sample','ns_per_op'])
 for r in rows:
  for i,ns in enumerate(r['samples_ns_per_op'],1):w.writerow([r['compiler'],r['variant'],r['workload'],r['bytes'],r['length'],r['reps'],i,ns])
variants={r['variant']:r['implementation'] for r in rows}
works=['grow','reserved','indexed','random','direct','mutate']
summary=['# Runtime benchmark v2', '', '## Geometric mean ratio against include-generated C arrays', '', '16 cases (four sizes x four lengths) per compiler and workload, equal weights. Smaller is faster.', '', 'These ratios are **descriptive**, not a composite ranking: real workload frequencies are unknown.','']
for compiler in ('clang','gcc'):
 summary.extend([f'### {compiler} (-O2)','', '| Workload | '+ ' | '.join(variants[v] for v in range(8))+' |','|'+'---|'*9])
 for work in works:
  ratios=[]
  for v in range(8):
   vals=[r['ratio_vs_c_include'] for r in rows if r['compiler']==compiler and r['workload']==work and r['variant']==v]
   assert len(vals)==16,(compiler,work,v,len(vals))
   ratios.append(math.exp(statistics.mean(map(math.log,vals))))
  summary.append('| '+work+' | '+' | '.join(f'{x:.2f}×' for x in ratios)+' |')
 summary.append('')
 for bytes,n in ((16,8192),(64,128),(256,8192)):
  summary.extend([f'### {compiler} representative times for {bytes} bytes, N={n}', '', '| Workload | '+' | '.join(variants[v] for v in range(8))+' |','|'+'---|'*9])
  for work in works:
   vals=[lookup[(compiler,work,bytes,n,v)]['median_ns_per_op'] for v in range(8)]
   summary.append('| '+work+' | '+' | '.join(f'{x:.3f} ns' for x in vals)+' |')
  summary.append('')
summary.extend(['## Notes','','- Macros / C templates C++ and Hooper variants are all separate single-translation-unit builds.','- All 8 were compared in the same interleaved randomized trials per case with identical repetitions and checksums.','- Compiler-generated specialization, dynamic allocation, copy size, cache effects and measurement variance affect results.','- In particular, 256B assignment vs memcpy may produce codegen surprises.',''])
if (ROOT/'compile_v2.json').exists():
 results=json.loads((ROOT/'compile_v2.json').read_text())
 summary.extend(['## Compile times (120 types)', '', '| Compiler | Opt | '+' | '.join(sorted(set(r['variant'] for r in results)))+' |','|'+'---|'*(3+len(set(r['variant'] for r in results)))])
 for compiler in ('clang','gcc'):
  for opt in ('-O0','-O2'):
   names=sorted(set(r['variant'] for r in results))
   vals=[next(r['median_ms'] for r in results if r['variant']==n and r['compiler']==compiler and r['optimization']==opt) for n in names]
   summary.append('| '+compiler+' | '+opt+' | '+' | '.join(f'{x:.1f} ms' for x in vals)+' |')
summary.append('')
(ROOT/'summary_v2.md').write_text('\n'.join(summary))
print('Wrote CSV and summary',len(rows))
