#include <gtest/gtest.h>
#include <string>

bool areTheyAnagrams(std::string word1, std::string word2) {
    // get the length of the two strings
    int lengthWord1 = word1.length();
    int lengthWord2 = word2.length();

    // compare the lengths, if they aren't equal, they can not be anagrams
    if (lengthWord1 != lengthWord2) {
        return false;
    }

    // sort both of the strings
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    // compare the sorted strings
    for (int i = 0; i < lengthWord1; i++) {
        if (word1[i] != word2[i]) {
            return false;
        }
    }
    return true;
}

TEST(anagramTest, testCapitals) {
    EXPECT_EQ(areTheyAnagrams("AnNA", "ANNa"), false);
}

TEST(anagramTest, testRealAnagram) {
    EXPECT_EQ(areTheyAnagrams("gyomorrontas", "toronymorgas"), true);
}

TEST(anagramTest, testNonAnagram) {
    EXPECT_EQ(areTheyAnagrams("anna", "Peti"), false);
}

TEST(anagramTest, testNonMatchingLength) {
    EXPECT_EQ(areTheyAnagrams("ann", "Petike"), false);
}