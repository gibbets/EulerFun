#include <iostream>

#include "primefactor.h"

long long parseNumber(const char *argv) {
    std::size_t pos;
    std::string arg = argv;

    return std::stoll(arg, &pos);
}

int main(int argc, char *argv[]) {
    if(argc < 2) {
        std::cout << "You need to provide a number" << std::endl;

        return 1;
    }

    long long limit = parseNumber(argv[1]);

    std::cout << getLargestPrimeFactor(limit) << std::endl;

    return 0;
}