#include <iostream>

#include "fibonacci.h"

int parseNumber(const char *argv) {
    std::size_t pos;
    std::string arg = argv;

    return std::stoi(arg, &pos);
}

int main(int argc, char *argv[]) {
    if(argc < 2) {
        std::cout << "You need to provide a limit" << std::endl;

        return 1;
    }

    int limit = parseNumber(argv[1]);

    std::cout << calculate(limit) << std::endl;

    return 0;
}