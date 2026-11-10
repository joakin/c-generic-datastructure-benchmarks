#!/usr/bin/env python3
"""Same 120-type source workload as the previous compile benchmark, plus fast path."""
import json, random, statistics, subprocess, time
from pathlib import Path
OUT=Path(__file__).resolve().parent
BASE=OUT/'compile_120_sources'/'generated_120'
variants={'C includes':'c_includes.c','Hooper shared':'c_hooper.c','Hooper fastpath':'c_hooper_fastpath.c','C++ templates':'cpp_template.cpp'}
results=[];rng=random.Random(1717)
for compiler in ['clang','gcc']:
    for optimization in ['-O0','-O2']:
        rounds=5 if optimization=='-O0' else 3
        timings={variant:[] for variant in variants}
        for trial in range(rounds):
            order=list(variants);rng.shuffle(order)
            for variant in order:
                source=BASE/variants[variant]
                binary=('clang++' if compiler=='clang' else 'g++') if variant=='C++ templates' else compiler
                std='-std=c++20' if variant=='C++ templates' else '-std=c11'
                obj=OUT/'compile_bench.o'
                cmd=[binary,std,optimization,'-c',str(source),'-o',str(obj)]
                start=time.perf_counter_ns(); subprocess.run(cmd,check=True,stdout=subprocess.DEVNULL,stderr=subprocess.PIPE); delta=(time.perf_counter_ns()-start)/1e6
                timings[variant].append(delta)
        for variant,tt in timings.items():
            results.append(dict(compiler=compiler,optimization=optimization,variant=variant,median_ms=statistics.median(tt),samples_ms=tt))
            print(compiler,optimization,variant,round(statistics.median(tt),1),'ms',flush=True)
        (OUT/'compile_120_results.json').write_text(json.dumps(results,indent=2))
(OUT/'compile_bench.o').unlink(missing_ok=True)
print('DONE',flush=True)
