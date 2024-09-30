cc_binary(
    name = "hello_afl",
    srcs = ["hello_afl.cpp"],
    copts = [
        "-fsanitize=address",    # Aktivera AddressSanitizer för att hitta minnesfel
        "-fno-omit-frame-pointer",  # Bevara stackspårning för bättre debugging
    ],
    linkopts = [
        "-fsanitize=address",    # Länka med AddressSanitizer
    ],
)
