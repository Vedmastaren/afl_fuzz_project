bazel build //:hello_afl
afl-fuzz -i input_corpus -o output_corpus ./bazel-afl_fuzz_project/hello_afl @@
