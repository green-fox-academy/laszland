#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

void filter (std::vector<std::string> search, std::vector<std::string> &list);
int main(int argc, char* args[])
{
    std::vector<std::string> sweets = {"Cupcake", "Brownie"};
    std::vector<std::string> list = {"Cupcake", "Carrot", "Bread", "Brownie", "Lemon"};

    // Accidentally we added "Carrot", "Lemon" and "Bread" to the list.
    // Your task is to remove them from the list. "sweets" vector can help you with this
    // You should erase every element from "list" vector that is not in "sweets" vector.
    // No, don't just remove the lines
    // Create a method called filter() which takes the two lists as parameters.

    filter(sweets, list);

    // Expected output: Cupcake Brownie
    for (int i = 0; i < list.size(); ++i) {
        std::cout << list[i] << " ";
    }

    return 0;
}

void filter (std::vector<std::string> search, std::vector<std::string> &list) {
    for (int i = 0; i < list.size(); ++i) {
        bool isInTheSearch = false;
        for (int j = 0; j < search.size(); ++j) {
            if (list[i] == search[j]) {
                isInTheSearch = true;
                break;
            }
        }
        if (!isInTheSearch) {
            list.erase(list.begin() + i);
            i--;
        }
    }
}