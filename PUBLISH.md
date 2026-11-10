# Publishing notes

This repository is hosted at [joakin/c-generic-datastructure-benchmarks](https://github.com/joakin/c-generic-datastructure-benchmarks).

The benchmark sources, scripts, and recorded results are tracked in Git. Build outputs under `bin/` and temporary object files are ignored.

For a local checkout:

```sh
git clone https://github.com/joakin/c-generic-datastructure-benchmarks.git
cd c-generic-datastructure-benchmarks
sh scripts/smoke-test.sh
```

To rerun the full suite on Linux (this changes local results):

```sh
sh scripts/reproduce-all.sh
```

The `scripts/publish.sh` helper is retained for creating a new repository from an exported copy of the project. It is **not** needed to update this repository.
