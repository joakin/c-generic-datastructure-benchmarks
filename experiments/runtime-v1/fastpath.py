#!/usr/bin/env python3
"""Paired runtime comparison: C specialized vs Hooper shared slow growth + inline hot path."""
import json,os,random,statistics,time
from run import run, ROOT, WORKS, SIZES, LENGTHS
cpu=min(os.sched_getaffinity(0));os.sched_setaffinity(0,{cpu})
cases=[(w,s,n) for w in WORKS for s in SIZES for n in LENGTHS]
rng=random.Random(9282); rng.shuffle(cases)
results=[];start=time.perf_counter()
for compiler in ('clang','gcc'):
 for k,(w,s,n) in enumerate(cases,1):
  cal_reps=max(1,8192//n)
  cal={v:run(ROOT/'bin'/f'{compiler}_{v}',w,s,n,cal_reps) for v in (0,5)}
  assert cal[0][1]==cal[5][1],(compiler,w,s,n)
  reps=max(1,min(600000,int(30e6/max(t/cal_reps for t,c in cal.values()))))
  samples={0:[],5:[]}; checks=set()
  for trial in range(5):
   order=[0,5] if (trial+k)%2 else [5,0]
   for v in order:
    t,c=run(ROOT/'bin'/f'{compiler}_{v}',w,s,n,reps)
    samples[v].append(t/(reps*n));checks.add(c)
  assert len(checks)==1,(compiler,w,s,n,checks)
  row=dict(compiler=compiler,workload=WORKS[w],bytes=s,length=n,reps=reps,
       baseline_median_ns=statistics.median(samples[0]),fastpath_median_ns=statistics.median(samples[5]),
       speed_ratio=statistics.median(samples[5])/statistics.median(samples[0]),
       baseline_samples=samples[0],fastpath_samples=samples[5])
  results.append(row)
  if k%12==0 or k==len(cases):
   print(f'{compiler} {k}/{len(cases)} in {time.perf_counter()-start:.1f}s, {WORKS[w]} {s}B N={n}',flush=True)
   (ROOT/'fastpath_results.json').write_text(json.dumps(results,indent=2))
(ROOT/'fastpath_results.json').write_text(json.dumps(results,indent=2))
print('DONE',len(results),flush=True)
