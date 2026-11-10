#!/bin/sh
set -eu
cd "$(dirname "$0")"
mkdir -p bin
for compiler in clang gcc; do
  if [ "$compiler" = clang ]; then C=clang; CXX=clang++; else C=gcc; CXX=g++; fi
  for variant in 0 1 2 3 5 6 7; do
    "$C" -std=c11 -O2 -DNDEBUG -D_POSIX_C_SOURCE=200809L -DVARIANT="$variant" bench.c -o "bin/${compiler}_${variant}"
  done
  "$CXX" -std=c++20 -O2 -DNDEBUG -D_POSIX_C_SOURCE=200809L -DVARIANT=4 -x c++ bench.c -o "bin/${compiler}_4"
done
