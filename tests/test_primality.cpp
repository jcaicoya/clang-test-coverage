#include <gtest/gtest.h>
#include "primality.h"

TEST(PrimalityTest, SmallNumbers) {
    EXPECT_FALSE(is_prime(0));
    EXPECT_FALSE(is_prime(1));
    EXPECT_TRUE(is_prime(2));
    EXPECT_TRUE(is_prime(3));
    EXPECT_FALSE(is_prime(4));
}

TEST(PrimalityTest, LargerNumbers) {
    EXPECT_TRUE(is_prime(17));
    EXPECT_FALSE(is_prime(18));
    EXPECT_TRUE(is_prime(19));
    EXPECT_FALSE(is_prime(20));
    EXPECT_TRUE(is_prime(23));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
