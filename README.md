1. bazel build //:hello_afl
2. afl-fuzz -i input_corpus -o output_corpus ./bazel-afl_fuzz_project/hello_afl @@
3. export AFL_SKIP_CPUFREQ=1