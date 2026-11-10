#!/bin/sh
# Helper for publishing an exported copy to a newly created empty repository.
set -eu
if [ "$#" -ne 1 ]; then
  echo 'usage: sh scripts/publish.sh git@github.com:joakin/c-generic-datastructure-benchmarks.git' >&2
  exit 2
fi
ROOT=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
cd "$ROOT"
if ! git rev-parse --is-inside-work-tree >/dev/null 2>&1; then
  git init -b master
fi
if [ -n "$(git status --porcelain)" ]; then
  git add .
  git commit -m 'Add reproducible C and C++ generics benchmarks'
fi
if git remote get-url origin >/dev/null 2>&1; then
  echo 'origin remote already exists; refusing to replace it' >&2
  exit 3
fi
git remote add origin "$1"
git push -u origin master
