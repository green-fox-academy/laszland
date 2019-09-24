#include <iostream>
#include <fstream>
#include <string>
#include <exception>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

bool copyMyFile (std::string input, std::string output);

int main() {

    std::string inputFileName = "/Users/peter/greenfox/laszland/week-03/rescourceFile.txt";
    std::string outputFileName = "outputFile.txt";

    if (copyMyFile(inputFileName, outputFileName) == 1) {
        std::cout << "The copy was successful." << std::endl;
    } else {
        std::cout << "The copy wasn't successful." << std::endl;
    }
    return 0;
}

//declare function
bool copyMyFile (std::string input, std::string output) {
    int numbOfLines = 0;
    std::ifstream inputFile;
    std::ofstream outputFile;
    inputFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try {
        inputFile.open(input);
        outputFile.open(output);
        std::string contentOfFile;
        while (getline(inputFile, contentOfFile)) {
            outputFile << contentOfFile << std::endl;
            numbOfLines++;
        } inputFile.close();
        outputFile.close();
    } catch (std::ifstream::failure& e) {
        std::cout << e.what() << std::endl;
    }
    if (numbOfLines != 0) {
        return 1;
    } else {
        return 0;
    }
}