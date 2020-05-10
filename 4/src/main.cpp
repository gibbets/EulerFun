#include <iostream>

#include "lpp.h"

int parseNumber(const char *argv) {
    std::size_t pos;
    std::string arg = argv;

    return std::stoi(arg, &pos);
}

int main(int argc, char *argv[]) {
    if(argc < 2) {
        std::cout << "You need to provide a number" << std::endl;

        return 1;
    }

    int limit = parseNumber(argv[1]);


    std::cout << getLPP(limit) << std::endl;

    return 0;
}