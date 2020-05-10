#include "fibonacci.h"

Fibonacci::Fibonacci(const unsigned long long seed1, const unsigned long long seed2) {
    this->fib1 = seed1;
    this->fib2 = seed2;
}

unsigned long long Fibonacci::get() {
    return this->fib2;
}

unsigned long long Fibonacci::getNext() {
    unsigned long long tmp = this->fib1;

    this->fib1 = this->fib2;
    this->fib2 = this->fib1 + tmp;    

    return this->fib2;
}

unsigned long long calculate(int limit) {
    Fibonacci fib{1, 2};

    unsigned long long sum = 2;

    while(fib.getNext() <= limit) {
        if(fib.get() % 2 == 0)
            sum += fib.get();
    }

    return sum;
}