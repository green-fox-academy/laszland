#include <gtest/gtest.h>
#include "Extension.h"

TEST(add, _2and3is5) {
    ASSERT_EQ(7, add(2, 5));
}

TEST(add, _1and4is5) {
    ASSERT_EQ(5, add(1, 4));
}

TEST(max_of_three, first) {
    ASSERT_EQ(9, maxOfThree(5, 7, 9));
}

TEST(max_of_three, third) {
    ASSERT_EQ(11, maxOfThree(1, 11, 6));
}

TEST(median, four) {
    ASSERT_EQ(11, median({10, 11, 12, 13}));
}

TEST(median, five) {
    ASSERT_EQ(13, median({11, 12, 13, 13, 13, 14, 15}));
}

TEST(is_vowel, a) {
    ASSERT_TRUE(isVowel('a'));
}

TEST(is_vowel, u) {
    ASSERT_TRUE(isVowel('u'));
}

TEST(translate, bemutatkozik) {
    ASSERT_EQ("havaravagovos", translate("haragos"));
}

TEST(translate, lagopus) {
    ASSERT_EQ("lavagovopuvus", translate("lagopus"));
}

