int getLargestPrimeFactor(const unsigned long long value) {
    int factor = 2;

    unsigned long long tmp = value;

    
        for(unsigned long long i = 2; i <= tmp; i++) {
            if(tmp % i == 0) {
                tmp = tmp / i;
                factor = i;
            }
        }


    return factor;
}