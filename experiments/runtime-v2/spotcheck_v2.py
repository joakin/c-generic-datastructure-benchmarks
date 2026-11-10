#!/usr/bin/env python3
import json,os,random,statistics,subprocess,time
from pathlib import Path
ROOT=Path(__file__).resolve().parent
rng=random.Random(38022)
core=min(os.sched_getaffinity(0));os.sched_setaffinity(0,{core})
CASES=[
 ('gcc',2,64,128,150000),       # GCC 64B reserved cliff
 ('gcc',2,16,8192,2500),      # GCC no-hint not inlined
 ('gcc',1,16,8192,2500),
 ('clang',2,256,8192,500),    # Clang 256B strided copies
 ('clang',2,16,8192,3000),
]
VARIANTS=[0,4,5,6,7]
rows=[]
for compiler,work,size,n,reps in CASES:
 vals={v:[] for v in VARIANTS}; checks=set()
 for k in range(9):
  ids=VARIANTS.copy();rng.shuffle(ids)
  for v in ids:
   out=subprocess.check_output([str(ROOT/'bin'/f'{compiler}_{v}'),str(work),str(size),str(n),str(reps)],text=True)
   ns,checksum=map(int,out.split())
   vals[v].append(ns/(reps*n));checks.add(checksum)
 if len(checks)!=1: raise RuntimeError((compiler,work,size,n,checks))
 base=statistics.median(vals[0])
 for v,ts in vals.items():
  row=dict(compiler=compiler,workload=work,bytes=size,length=n,reps=reps,variant=v,
    median_ns_per_element=statistics.median(ts),ratio_vs_specialized=statistics.median(ts)/base,samples=ts)
  rows.append(row)
 print(compiler,'work',work,'bytes',size,'length',n,'reps',reps,[(v,round(statistics.median(ts),3)) for v,ts in vals.items()],flush=True)
(ROOT/'spotcheck_v2.json').write_text(json.dumps(rows,indent=2))
