#include <iostream>
#include <string>
#include <vector>

#include "calculate.h"

int parseNumber(const char *argv) {
    std::size_t pos;
    std::string arg = argv;

    return std::stoi(arg, &pos);
}



int main(int argc, char *argv[]) {
    if(argc < 3) {
        std::cout << "You need to provide at least the limit and one divisor" << std::endl;
        return 1;
    }

    //pasring limit
    const int limit = parseNumber(argv[1]);

    //parsing divisions
    std::vector<int> divisions;

    for(int i = 2; i < argc; i++) {
        int tmp = parseNumber(argv[i]);

        divisions.push_back(tmp);
    }

    int sum = calculate(limit, divisions);
    
    std::cout << sum << std::endl;


    return 0;
}