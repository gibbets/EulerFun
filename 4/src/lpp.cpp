#include <string>
#include <cmath>

#include "lpp.h"

int getLPP(const int limit) {
    const int max = std::pow(10, limit)-1;
    const int min = std::pow(10, limit-1);

    int tmp = 0;

    for(int i = max; i > min; i--) {
        for(int j = max; j > min; j--) {
            if(isPalindrom(std::to_string(i * j)) && (i * j > tmp)) {
                tmp = i * j;
            }
        }
    }

    return tmp;
}

bool isPalindrom(std::string value) {
    if(value.size() % 2 != 0) {
        return false;
    }

    for(int i = 0; i < value.size()/2; i++) {
        if(value[i] != value[value.size()-i-1]) {
            return false;
        }
    }

    return true;
}