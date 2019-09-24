#include <iostream>
#include <exception>
#include <fstream>
#include <string>

void writeMyFile (std::string file, std::string word, int numbLines);

int main() {
    // Create a function that takes 3 parameters: a path, a word and a number
    // and is able to write into a file.
    // The path parameter should be a string that describes the location of the file you wish to modify
    // The word parameter should also be a string that will be written to the file as individual lines
    // The number parameter should describe how many lines the file should have.
    // If the word is "apple" and the number is 5, it should write 5 lines
    // into the file and each line should read "apple"
    std::string pathOfFile = "/Users/peter/greenfox/laszland/week-03/outputFile.txt";
    std::string str = "banana";
    int numberOfLines = 5;
    writeMyFile(pathOfFile, str, numberOfLines);
    return 0;
}

void writeMyFile (std::string file, std::string word, int numbLines) {
    std::ofstream myFile;
    myFile.exceptions(std::ofstream::failbit | std::ofstream::badbit);
    try {
        myFile.open(file);
        for (int i = 0; i < numbLines; i++) {
            myFile << word << std::endl;
        }
        myFile.close();
    } catch (std::ofstream::failure& e) {
        std::cout << e.what() << std::endl;
    }
}