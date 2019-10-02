#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>

std::map<char, int> countLetters(std::string myText) {
    std::map<char , int> countedLetters;

    for (int i = 0; i < myText.length(); i++) {
        countedLetters[myText[i]]++;
    }
    return countedLetters;
}


std::map<char, int> myTestMap;

int main () {

        myTestMap.insert(std::pair<char, int>('a', 3));
        myTestMap.insert(std::pair<char, int>('C', 4));
        myTestMap.insert(std::pair<char, int>('m', 1));
        myTestMap.insert(std::pair<char, int>('n', 1));
        myTestMap.insert(std::pair<char, int>('o', 3));
        myTestMap.insert(std::pair<char, int>('p', 1));
        myTestMap.insert(std::pair<char, int>('y', 1));
}



TEST(countLettersTest, test1) {
        EXPECT_EQ(countLetters("CocaColaCompany"), myTestMap);
    }