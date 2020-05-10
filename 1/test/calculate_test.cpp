#include <vector>

#include "../src/calculate.h"
#include "gtest/gtest.h"

TEST(CalculateTest, start) {
    std::vector<int> myInput1{3, 5};
    int limit1 = 10;

    EXPECT_EQ(23, calculate(limit1, myInput1));


}

TEST(CalculateTest, zero) {
    std::vector<int> myInput2{4, 3};
    int myLimit2 = 0;

    EXPECT_EQ(0, calculate(myLimit2, myInput2));
}

TEST(CalculateTest, twice) {
    std::vector<int> myInput2{2, 2};
    int myLimit2 = 7;

    EXPECT_EQ(12, calculate(myLimit2, myInput2));
}

TEST(CalculateTest, negativ) {
    std::vector<int> myInput2{3, 5};
    int myLimit2 = -10;

    EXPECT_EQ(0, calculate(myLimit2, myInput2));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}