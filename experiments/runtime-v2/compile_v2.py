#!/usr/bin/env python3
import json,random,statistics,subprocess,time
from pathlib import Path
ROOT=Path(__file__).resolve().parent
SOURCES={
'C includes':'c_includes.c',
'C Hooper forced shared':'c_hooper.c',
'C Hooper macro fast path':'c_hooper_fastpath.c',
'C Hooper idiomatic inline':'c_hooper_idiomatic_inline.c',
'C Hooper idiomatic no hint':'c_hooper_idiomatic_nohint.c',
'C++ templates':'cpp_template.cpp',
}
rng=random.Random(3239);results=[]
for compiler in ('clang','gcc'):
 for opt in ('-O0','-O2'):
  rounds=5 if opt=='-O0' else 4
  timings={v:[] for v in SOURCES}
  for trial in range(rounds):
   names=list(SOURCES);rng.shuffle(names)
   for name in names:
    cpp=(name=='C++ templates')
    cc=('clang++' if compiler=='clang' else 'g++') if cpp else compiler
    src=ROOT/'compile_120_sources'/SOURCES[name]
    dest=ROOT/'_tmp_compile.o'
    cmd=[cc,('-std=c++20' if cpp else '-std=c11'),opt,'-c',str(src),'-o',str(dest)]
    start=time.perf_counter_ns()
    proc=subprocess.run(cmd,stdout=subprocess.PIPE,stderr=subprocess.PIPE)
    if proc.returncode: raise RuntimeError(proc.stderr.decode()[:2000])
    timings[name].append((time.perf_counter_ns()-start)/1e6)
  for name,t in timings.items():
   results.append(dict(compiler=compiler,optimization=opt,variant=name,median_ms=statistics.median(t),samples_ms=t))
   print(f'{compiler} {opt:4} {name:33} {statistics.median(t):.1f} ms',flush=True)
  (ROOT/'compile_v2.json').write_text(json.dumps(results,indent=2))
(ROOT/'_tmp_compile.o').unlink(missing_ok=True)
