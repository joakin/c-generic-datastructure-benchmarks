#!/usr/bin/env python3
"""Measure compiler wall-clock times (excluding linking) in fresh subprocesses.

Example: python bench.py 120 clang -O2 5
Outputs/updates results.json. Case order rotates to reduce ordering effects.
"""
import json, statistics, subprocess, sys, time
from pathlib import Path

n = int(sys.argv[1]); family = sys.argv[2]; mode = sys.argv[3]; reps = int(sys.argv[4])
root = Path(__file__).resolve().parent
out = root / f'generated_{n}'
variants = [ ('plain-c','plain.c'), ('plain-cpp','plain.cpp'),
             ('c-includes','c_includes.c'), ('c-hooper','c_hooper.c'),
             ('cpp-templates','cpp_template.cpp'), ('cpp-templates-stl','cpp_stl.cpp') ]
results_path = root / 'results.json'
if results_path.exists(): results = json.loads(results_path.read_text())
else: results = {}
key = f'{n}/{family}/{mode}'
measurements = {v: [] for v,_ in variants}

for rep in range(reps):
    cases = variants[rep % 6:] + variants[:rep % 6]
    for variant, src in cases:
        cc = ('clang++' if family == 'clang' else 'g++') if src.endswith('.cpp') else ('clang' if family == 'clang' else 'gcc')
        std = '-std=c++20' if src.endswith('.cpp') else '-std=c11'
        output = str(out / f'.{family}-{variant}-{mode.replace("-","")}.o')
        args = [cc, std, '-Wno-unused-function', '-Werror', mode, '-I'+str(out), str(out / src)]
        if mode == '-fsyntax-only':
            args += ['-fsyntax-only']
        else:
            args += ['-c','-o', output]
        start = time.perf_counter()
        p = subprocess.run(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
        elapsed = 1000 * (time.perf_counter() - start)
        if p.returncode:
            print(f'COMPILE FAILED {src}: {p.stderr[:2000]}'); raise SystemExit(1)
        measurements[variant].append(round(elapsed, 2))
    print(f'{key} repetition {rep+1}/{reps}: ' + ', '.join(f'{name}={measurements[name][-1]:.0f}ms' for name,_ in variants), flush=True)

results[key] = {
    variant: {"values_ms": measurements[variant], "median_ms": round(statistics.median(measurements[variant]), 2)}
    for variant,_ in variants
}
results_path.write_text(json.dumps(results, indent=2))
print('MEDIANS', key, {name: value['median_ms'] for name, value in results[key].items()}, flush=True)
