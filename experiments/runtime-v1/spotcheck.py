#!/usr/bin/env python3
"""Longer run for selected representative cases (not used in primary aggregate)."""
import importlib.util, json, os, random, statistics, time
from pathlib import Path
from run import ROOT, run, VARIANTS, WORKS
cpu=min(os.sched_getaffinity(0))
os.sched_setaffinity(0,{cpu})
scenarios=[(w,s,n) for w in [1,2,3,4] for s,n in [(16,8192),(256,8192),(256,262144)]]
out=[]
for compiler in ['clang','gcc']:
 for w,s,n in scenarios:
  calreps=max(1,8192//n)
  cal=[run(ROOT/'bin'/f'{compiler}_{v}',w,s,n,calreps) for v in VARIANTS]
  assert len({c for t,c in cal})==1
  reps=max(1,min(1000000,int(80e6/max(t/calreps for t,c in cal))))
  obs={v:[] for v in VARIANTS}; checks=set(); rng=random.Random(1729)
  for _ in range(7):
   order=list(VARIANTS);rng.shuffle(order)
   for v in order:
    t,c=run(ROOT/'bin'/f'{compiler}_{v}',w,s,n,reps)
    obs[v].append(t/(n*reps));checks.add(c)
  assert len(checks)==1
  for v,ns in obs.items():
   out.append(dict(compiler=compiler,workload=WORKS[w],bytes=s,length=n,variant=v,median_ns_per_op=statistics.median(ns),samples_ns_per_op=ns,reps=reps))
  print(f'{compiler} {WORKS[w]} {s}B n={n} ',{v:round(statistics.median(z),2) for v,z in obs.items()},flush=True)
  (ROOT/'spotcheck_results.json').write_text(json.dumps(out,indent=2))
print('Done')
