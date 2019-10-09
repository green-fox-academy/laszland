#include <gtest/gtest.h>
#include <vector>
#include "apple.h"

int sum(std::vector<int> listOfNumbers) {
    int sum = 0;
    for (int i = 0; i < listOfNumbers.size(); ++i) {
        sum += listOfNumbers[i];
    }
    return sum;
}

std::vector<int> number1 = {2, -2, 2, -2, 0};
std::vector<int> number2 = {};
std::vector<int> number3 = {6};
std::vector<int> number4 = {6, 6, 6, 6, 6};
std::vector<int> number5 = {-6, -6, -6, -6, -6};


TEST(check_sum, generalTest) {
    EXPECT_EQ(sum(number1), 0);
}

TEST(check_sum, emptyTest) {
    EXPECT_EQ(sum(number2), 0);
}

TEST(check_sum, oneElementTest) {
    EXPECT_EQ(sum(number3), 6);
}

TEST(check_sum, multipleElementsTest) {
    EXPECT_EQ(sum(number4), 30);
}

TEST(check_sum, negativeElementsTest) {
    EXPECT_EQ(sum(number5), -30);
}

