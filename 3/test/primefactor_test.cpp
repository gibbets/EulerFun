#include <vector>

#include "../src/primefactor.h"
#include "gtest/gtest.h"

TEST(PrimefactorTest, start) {
    EXPECT_EQ(3, getLargestPrimeFactor(12));
    EXPECT_EQ(11, getLargestPrimeFactor(11));
    EXPECT_EQ(29, getLargestPrimeFactor(13195));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}