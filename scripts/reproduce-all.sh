#!/bin/sh
set -eu
ROOT=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
cd "$ROOT/experiments/compile-generics"
python3 generate.py 30
python3 generate.py 120
python3 generate.py 240
python3 bench.py 120 clang -O0 5
python3 bench.py 120 clang -O2 3
python3 bench.py 120 gcc -O0 5
python3 bench.py 120 gcc -O2 3
cd "$ROOT/experiments/runtime-v1"
sh build.sh
python3 run.py clang --samples 5 --target-ms 30
python3 run.py gcc --samples 5 --target-ms 30
python3 fastpath.py
python3 analyze.py
python3 compile_120.py
cd "$ROOT/experiments/runtime-v2"
sh build.sh
python3 run_v2.py --samples 5 --target-ms 15
python3 analyze_v2.py
python3 generate_120_idiomatic.py
python3 compile_v2.py
python3 spotcheck_v2.py
