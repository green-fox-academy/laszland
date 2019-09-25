#include <iostream>
#include <vector>
#include <string>
#include <fstream>

std::vector<std::string> dataBase;

int main() {
    std::ifstream trees;
    trees.open("trees.txt");
    std::string dataOfTrees;
    if (trees.is_open() == 1) {
        while (getline(trees, dataOfTrees)) {
            dataBase.push_back(dataOfTrees);
        }
    } else {
        std::cout << "file couldn't be opened" << std::endl;
    }
    for (int i = 0; i < 4; i++) {
     std::cout << dataBase[i] << std::endl;
    }

}