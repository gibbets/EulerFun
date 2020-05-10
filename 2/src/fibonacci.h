class Fibonacci {
    public:
        Fibonacci(const unsigned long long seed1, const unsigned long long seed2);
        void reset();
        unsigned long long getNext();
        unsigned long long get();

    private:
        unsigned long long fib1;
        unsigned long long fib2;
};

unsigned long long calculate(int limit);