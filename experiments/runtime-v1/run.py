#!/usr/bin/env python3
"""Bench 5 implementations at matching repetitions on one pinned CPU."""
import argparse, json, os, random, statistics, subprocess, time
from pathlib import Path
ROOT=Path(__file__).resolve().parent
SIZES=[4,16,64,256]
LENGTHS=[8,128,8192,262144]
WORKS={1:'grow',2:'reserved',3:'indexed',4:'random',5:'direct',6:'mutate'}
VARIANTS={0:'C_include_specialized',1:'C_Hooper_shared',2:'C_Hooper_inline_index',3:'C_Hooper_inlinable',4:'Cpp_template'}
def run(exe,work,sz,n,reps):
    r=subprocess.run([str(exe),str(work),str(sz),str(n),str(reps)],capture_output=True,text=True,check=True)
    xs=r.stdout.strip().split()
    if len(xs)!=2: raise ValueError((r.stdout,r.stderr))
    return int(xs[0]),int(xs[1])
def bench(compiler,samples,target_ms):
    cpu=min(os.sched_getaffinity(0))
    try: os.sched_setaffinity(0,{cpu}); print('Pinned to CPU',cpu,flush=True)
    except OSError as e: print('CPU pinning failed:',e,flush=True)
    cases=[(w,s,n) for w in WORKS for s in SIZES for n in LENGTHS]
    rng=random.Random(6163); rng.shuffle(cases)
    results=[]; t0=time.perf_counter()
    out=ROOT/f'results_{compiler}.json'
    for k,(w,s,n) in enumerate(cases,1):
        calreps=max(1,8192//n)
        cal=[run(ROOT/'bin'/f'{compiler}_{v}',w,s,n,calreps) for v in VARIANTS]
        if len({c for _,c in cal}) != 1: raise ValueError(f'checksum mismatch calibration {compiler} {w} {s} {n}: {cal}')
        worst=max(t/calreps for t,c in cal)
        reps=max(1,min(600000,int(target_ms*1e6/max(1,worst))))
        obs={v:[] for v in VARIANTS}; checks=set()
        for trial in range(samples):
            order=list(VARIANTS); rng.shuffle(order)
            for v in order:
                t,c=run(ROOT/'bin'/f'{compiler}_{v}',w,s,n,reps)
                obs[v].append(t); checks.add(c)
        if len(checks)!=1: raise ValueError(f'checksum mismatch {compiler} {w} {s} {n} {reps}: {checks}')
        for v,times in obs.items():
            ns=[t/(reps*n) for t in times]
            results.append(dict(compiler=compiler,variant=v,implementation=VARIANTS[v],work=w,workload=WORKS[w],bytes=s,length=n,reps=reps,checksum=next(iter(checks)),median_ns_per_op=statistics.median(ns),min_ns_per_op=min(ns),max_ns_per_op=max(ns),samples_ns=times,samples_ns_per_op=ns))
        if k%12==0 or k==len(cases):
            print(f'{compiler}: {k}/96 cases {time.perf_counter()-t0:.1f}s; {WORKS[w]}, {s}B, N={n}, reps={reps}',flush=True)
            out.write_text(json.dumps(results,indent=2))
    out.write_text(json.dumps(results,indent=2))
if __name__=='__main__':
    p=argparse.ArgumentParser();p.add_argument('compiler',choices=['clang','gcc']);p.add_argument('--samples',type=int,default=5);p.add_argument('--target-ms',type=float,default=30)
    a=p.parse_args(); bench(a.compiler,a.samples,a.target_ms)
