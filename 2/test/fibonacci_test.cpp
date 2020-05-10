#include <vector>

#include "../src/fibonacci.h"
#include "gtest/gtest.h"

TEST(FibonacciTest, start) {
    Fibonacci fib(1, 1);

    EXPECT_EQ(1, fib.get());
    EXPECT_EQ(2, fib.getNext());
    EXPECT_EQ(3, fib.getNext());
    EXPECT_EQ(3, fib.get());
}

TEST(FibonacciTest, calculate) {

    EXPECT_EQ(2, calculate(2));
    EXPECT_EQ(44, calculate(89));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}