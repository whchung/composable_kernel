cd /home/jack/projects/composable_kernel/build/example/01_gemm
./fuse_internal.sh
/home/jack/cmake-3.26.4-linux-x86_64/bin/cmake -E cmake_link_script CMakeFiles/example_gemm_xdl_fp16.dir/link.txt --verbose=1
cd /home/jack/projects/composable_kernel/build
AMD_KERNEL_FUSION=1 AMD_KERNEL_FUSION_HOST=`head -1 /home/jack/projects/composable_kernel/build/example/01_gemm/fused_manifest.txt` AMD_KERNEL_FUSION_GUEST=`tail -1 /home/jack/projects/composable_kernel/build/example/01_gemm/fused_manifest.txt` LD_PRELOAD=/home/jack/projects/hipamd/build/lib/libamdhip64.so ./bin/example_gemm_xdl_fp16 1 1 1 256 128 64 64 64 128
