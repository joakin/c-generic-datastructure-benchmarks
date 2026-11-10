#!/usr/bin/env python3
"""Paired, same-run 8-way comparison of procedural C, C++ and Hooper approaches.
Full 4 sizes x 4 lengths x 6 workloads x 2 compilers, five samples each.
"""
import argparse
import json
import os
import random
import statistics
import subprocess
import time
from pathlib import Path
ROOT=Path(__file__).resolve().parent
SIZES=[4,16,64,256]
LENGTHS=[8,128,8192,262144]
WORKS={1:'grow',2:'reserved',3:'indexed',4:'random',5:'direct',6:'mutate'}
VARIANTS={
 0:'C_include_specialized',
 1:'C_Hooper_forced_shared',
 2:'C_Hooper_shared_inline_index',
 3:'C_Hooper_force_inline_backend',
 4:'Cpp_template',
 5:'C_Hooper_macro_typed_fastpath_noipa_growth',
 6:'C_Hooper_idiomatic_static_inline_small_helpers',
 7:'C_Hooper_idiomatic_static_small_helpers_no_hint',
}
def run(exe,w,size,n,reps):
    proc=subprocess.run([str(exe),str(w),str(size),str(n),str(reps)],
      capture_output=True,text=True,check=True)
    data=proc.stdout.split()
    if len(data)!=2: raise RuntimeError((proc.args,proc.stdout,proc.stderr))
    return int(data[0]),int(data[1])

def main():
    p=argparse.ArgumentParser()
    p.add_argument('--samples',type=int,default=5)
    p.add_argument('--target-ms',type=float,default=15)
    p.add_argument('--compiler',choices=['clang','gcc','both'],default='both')
    args=p.parse_args()
    cpus=os.sched_getaffinity(0)
    core=min(cpus)
    os.sched_setaffinity(0,{core})
    print('Pinned to CPU',core,flush=True)
    rng=random.Random(0x190AA)
    cases=[(w,sz,n) for w in WORKS for sz in SIZES for n in LENGTHS]
    rng.shuffle(cases)
    results=[]
    for cc in ['clang','gcc'] if args.compiler=='both' else [args.compiler]:
      t0=time.perf_counter()
      for k,(w,sz,n) in enumerate(cases,1):
        calreps=max(1,min(100000,8192//n))
        # Run all variants first for equivalence & automatic repetition counts.
        calibration={v:run(ROOT/'bin'/f'{cc}_{v}',w,sz,n,calreps) for v in VARIANTS}
        assert len({r[1] for r in calibration.values()})==1,(cc,w,sz,n,calibration)
        worst_ns_per_iteration=max(r[0]/calreps for r in calibration.values())
        reps=max(1,min(2000000, int(args.target_ms*1e6/max(1,worst_ns_per_iteration))))
        samples={v:[] for v in VARIANTS}; checks=set()
        for trial in range(args.samples):
          order=list(VARIANTS);rng.shuffle(order)
          for v in order:
            ns,checksum=run(ROOT/'bin'/f'{cc}_{v}',w,sz,n,reps)
            samples[v].append(ns/(reps*n))
            checks.add(checksum)
        assert len(checks)==1,(cc,w,sz,n,checks)
        for v,values in samples.items():
          results.append({
            'compiler':cc, 'variant':v, 'implementation':VARIANTS[v],
            'work':w, 'workload':WORKS[w], 'bytes':sz, 'length':n,
            'reps':reps, 'checksum':next(iter(checks)),
            'median_ns_per_op':statistics.median(values),
            'min_ns_per_op':min(values),'max_ns_per_op':max(values),
            'samples_ns_per_op':values,
          })
        if k % 12==0 or k==len(cases):
          print(f'{cc} {k}/96 cases {time.perf_counter()-t0:.1f}s, latest={WORKS[w]} / {sz}B / n={n} / reps={reps}',flush=True)
          (ROOT/'results_v2.json').write_text(json.dumps(results,indent=2))
    (ROOT/'results_v2.json').write_text(json.dumps(results,indent=2))
    print('DONE',len(results),flush=True)
if __name__=='__main__':main()
