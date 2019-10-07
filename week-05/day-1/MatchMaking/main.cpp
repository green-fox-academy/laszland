#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> makingMatches(std::vector<std::string>& girls, std::vector<std::string>& boys)
{
    std::vector<std::string> matchedPairs;

    if (girls.size() > boys.size()) {
        for (int i = 0; i < girls.size(); ++i) {
            if (i >= boys.size()) {
                matchedPairs.push_back(girls[i]);
            } else {
                matchedPairs.push_back(girls[i]);
                matchedPairs.push_back(boys[i]);
            }
        }
        }
        else if (girls.size() < boys.size()) {
        for (int i = 0; i < boys.size(); ++i) {
            if (i >= girls.size()) {
                matchedPairs.push_back(boys[i]);
            } else {
                matchedPairs.push_back(girls[i]);
                matchedPairs.push_back(boys[i]);
            }
        }
    }
        return matchedPairs;
}

int main(int argc, char* args[])
{
    std::vector<std::string> girls = {"Eve","Ashley","Claire","Kat","Jane"};
    std::vector<std::string> boys = {"Joe","Fred","Tom","Todd","Neef","Jeff"};

    // Write a method that joins the two lists by matching one girl with one boy into a new list
    // If someone has no pair, he/she should be the element of the list too
    // Exepected output: "Eve", "Joe", "Ashley", "Fred"...

    std::vector<std::string> matches =  makingMatches(girls, boys);

    for(int i = 0; i < matches.size(); ++i) {
        std::cout << matches[i] << " ";
    }

    return 0;
}