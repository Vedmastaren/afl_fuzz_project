1. bazel build //:hello_afl
2. afl-fuzz -i input_corpus -o output_corpus ./bazel-bin/hello_afl @@
3. export AFL_SKIP_CPUFREQ=1
4. export AFL_I_DONT_CARE_ABOUT_MISSING_CRASHES=1