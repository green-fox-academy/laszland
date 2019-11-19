#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>

std::string text1 = {"This is an example string to test my function."};
std::string text2 = {""};
std::string text3 = {"1232346568679755342"};
std::string text4 = {"dfgkdfjg;dsf345342cbcipsidvusdfvsiuiouio989798dfgdf"};
std::string text5 = {"-3"};


std::map<char, int> countLetters(std::string example) {
    std::map<char, int> lettersAndOccurance;
    for (int i = 0; i < example.length(); i++) {
        lettersAndOccurance[example[i]]++;
    }

    for (std::pair<char, int> p: lettersAndOccurance) {
        std::cout << p.first << " : " << p.second << std::endl;
    }
    return lettersAndOccurance;
}

TEST(countLettersTest, generalTest) {
    EXPECT_EQ(countLetters(text1)['m'], 2);
}

TEST(countLettersTest, emptyTest) {
    EXPECT_EQ(countLetters(text2)['m'], 0);
}

TEST(countLettersTest, numbersTest) {
    EXPECT_EQ(countLetters(text3)['1'], 1);
}

TEST(countLettersTest, numbersAndCharTest) {
    EXPECT_EQ(countLetters(text4)['3'], 2);
}

TEST(countLettersTest, negativeNumberTest) {
    EXPECT_EQ(countLetters(text5)['-'], 1);
}
