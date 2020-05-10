#include <vector>

#include "../src/lpp.h"
#include "gtest/gtest.h"

TEST(PrimefactorTest, start) {
    EXPECT_EQ(9009, getLPP(2));
}

TEST(IsPalindrom, pal) {
    EXPECT_TRUE(isPalindrom("9009"));
    EXPECT_FALSE(isPalindrom("1"));
    EXPECT_TRUE(isPalindrom(std::to_string(91 * 99)));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}