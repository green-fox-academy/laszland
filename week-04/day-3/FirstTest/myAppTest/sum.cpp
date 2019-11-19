#include <gtest/gtest.h>
#include <vector>

std::vector<int> myVector1 = {1, 2, 3};
std::vector<int> myVector2 = {};
std::vector<int> myVector3 = {1, 1, 2, 2, 3, 3};
std::vector<int> myVector4 = {-4, -6};

int sum(std::vector<int> myTestVector) {
    int temp = 0;
    if (myTestVector.size() == 0) {
        return temp;
    } else {
        for (int i = 0; i < myTestVector.size(); i++) {
            temp += myTestVector[i];
        }
        return temp / myTestVector.size();
    }
}


TEST(vectorTest, testNormal) {
    EXPECT_EQ(sum(myVector1), 2);
}

TEST(vectorTest, testEmpty) {
    EXPECT_EQ(sum(myVector2), 0);
}

TEST(vectorTest, testMultiple) {
    EXPECT_EQ(sum(myVector3), 2);
}

TEST(vectorTest, testNegative) {
    EXPECT_EQ(sum(myVector4), -5);
}