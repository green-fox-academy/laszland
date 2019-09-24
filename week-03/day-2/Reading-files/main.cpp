#include <iostream>
#include <exception>
#include <string>
#include <fstream>

int main () {
    std::ifstream myFile;
    myFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try {
        myFile.open("my-text.txt");
        if (myFile.is_open()) {
            std::cout << "yes" << std::endl;
            std::string text;
            getline(myFile, text);
            std::cout << text << std::endl;
            myFile.close();
        } else {
            std::cout << "no" << std::endl;
        }

    } catch (std::ifstream::failure &e) {
        std::cout << e.what() << std::endl;
    }
   return 0;
}