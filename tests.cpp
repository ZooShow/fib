#include "gtest/gtest.h"
#include "fib.h"

TEST(fib, expectedNum) {
    int n;
    n = (fib(1));
    EXPECT_EQ(1, n);
    n = (fib(3));
    EXPECT_EQ(2, n);
    n = (fib(12));
    EXPECT_EQ(144, n);
}

TEST(fib, expectedError) {
    int n;
    n = (fib(-1));
    EXPECT_EQ(0, n);
    n = (fib(-3));
    EXPECT_EQ(0, n);
    n = (fib(-25));
    EXPECT_EQ(0, n);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}