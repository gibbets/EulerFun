#include <vector>

#include "calculate.h"

int calculate(const unsigned int myLimit, const std::vector<int> myDivisions) {
    //calculation
    int sum = 0;

    for(int i = myLimit-1; i > 0; i--) {
        for(auto j : myDivisions) {
            if(i % j == 0) {
                sum += i;
                break;
            }
        }
    }

    return sum;
}