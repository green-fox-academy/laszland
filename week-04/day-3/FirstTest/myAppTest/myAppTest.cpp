
#include <gtest/gtest.h>
#include <iostream>

std::string getApple() {
    return "apple";
}

TEST (apple_check, test_apple1) {
    EXPECT_EQ(getApple(), "apple");
}

