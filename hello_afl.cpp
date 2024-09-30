#include <iostream>
#include <string.h>

void fuzz_me(const char *input) {
    if (strcmp(input, "fuzz") == 0) {
        std::cout << "AFL triggered!" << std::endl;
    } else {
        std::cout << "Not triggered." << std::endl;
    }
}

int main(int argc, char **argv) {
    if (argc > 1) {
        fuzz_me(argv[1]);
    } else {
        std::cout << "Provide input!" << std::endl;
    }
    return 0;
}
