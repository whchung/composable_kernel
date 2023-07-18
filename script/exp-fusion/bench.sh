echo "Non-fused GEMM -> GEMM"
AMD_KERNEL_FUSION=0 LD_PRELOAD=/home/jack/projects/hipamd/build/lib/libamdhip64.so ./bin/example_gemm_xdl_fp16_nonfused 1 1 1 256 128 64 64 64 128
echo "Fused GEMM + GEMM"
AMD_KERNEL_FUSION=1 AMD_KERNEL_FUSION_HOST=`head -1 /home/jack/projects/composable_kernel/build/example/01_gemm/fused_manifest.txt` AMD_KERNEL_FUSION_GUEST=`tail -1 /home/jack/projects/composable_kernel/build/example/01_gemm/fused_manifest.txt` LD_PRELOAD=/home/jack/projects/hipamd/build/lib/libamdhip64.so ./bin/example_gemm_xdl_fp16 1 1 1 256 128 64 64 64 128
