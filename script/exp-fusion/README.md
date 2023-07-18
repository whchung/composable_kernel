Installation
============
- put under build/
  - bench.sh
  - build.sh
  - fuse.sh
- put under build/example/01_gemm/
  - fuse_internal.sh

Run
===
- build original: ./build.sh
- make a copy of the original non-fused executable: cp bin/example_gemm_xdl_fp16 bin/example_gemm_xdl_fp16_nonfused
- build fused: ./fuse.sh
- benchmarking: ./bench.sh
