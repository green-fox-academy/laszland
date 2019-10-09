#include <gtest/gtest.h>
#include <string>

std::string word1 = {"rail safety"};
std::string word2 = {"fairy tales"};
std::string word3 = {"rail sa"};
std::string word4 = {"fairy tales"};
std::string word5 = {"rail Safety"};
std::string word6 = {"fairy Tales"};
std::string word7 = {""};
std::string word8 = {"fairy Tales"};
std::string word9 = {""};
std::string word10 = {""};

bool areTheyAnagrams(std::string string1, std::string string2) {

    if (string1.length() != string2.length()) {
        return false;
    } else {
        std::sort(string1.begin(), string1.end());
        std::sort(string2.begin(), string2.end());
        for (int i = 0; i < word1.length(); ++i) {
            if (string1[i] != string2[i]) {
                return false;
            }return true;
        }
        return true;
    }
}

TEST(anagrams, generalTest) {
    EXPECT_EQ(areTheyAnagrams(word1, word2), 1);
}

TEST(anagrams, sizeTest) {
    EXPECT_EQ(areTheyAnagrams(word3, word4), 0);
}

TEST(anagrams, capitalLetterTest) {
    EXPECT_EQ(areTheyAnagrams(word5, word6), 1);
}

TEST(anagrams, emptyTest) {
    EXPECT_EQ(areTheyAnagrams(word7, word8), 0);
}

TEST(anagrams, bothemptyTest) {
    EXPECT_EQ(areTheyAnagrams(word9, word10), 1);
}