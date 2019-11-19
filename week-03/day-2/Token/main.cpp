
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    // Create a program that decrypts the file called "duplicated-chars.txt",
    // and pritns the decrypred text to the terminal window.

    std::ifstream originalText("/Users/peter/greenfox/teaching-materials/workshop/file-manipulations/assets/duplicated-chars.txt");
    std::string line;

    while (std::getline(originalText, line)) {
        for (int i = 0; i < line.size(); i +=2) {
            std::cout << line[i];
        } std::cout << std::endl;
    }

    return 0;
}