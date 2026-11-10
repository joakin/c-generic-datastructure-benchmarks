#!/bin/sh
set -eu
ROOT=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
cd "$ROOT/experiments/runtime-v2"
sh build.sh
for compiler in clang gcc; do
  expected=''
  for variant in 0 1 2 3 4 5 6 7; do
    output=$("./bin/${compiler}_${variant}" 2 16 128 20)
    checksum=${output##* }
    if [ -z "$expected" ]; then expected="$checksum"; fi
    if [ "$checksum" != "$expected" ]; then
      echo "Checksum mismatch: $compiler variant=$variant expected=$expected got=$checksum" >&2
      exit 1
    fi
  done
  echo "$compiler: eight variants agree ($expected)"
done
clang -std=c11 -O2 hooper_demo.c hooper_array.c -o bin/hooper_demo
"./bin/hooper_demo"
echo 'Smoke test passed.'
