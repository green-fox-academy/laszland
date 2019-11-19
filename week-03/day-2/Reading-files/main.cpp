#include <iostream>
#include <exception>
#include <string>
#include <fstream>

//int countLines(std::string fileName);
int numbLines = 0;

int myText (std::string nameOFFile);

int main () {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file.

    std::cout << myText("my-text.txt") << std::endl;



}

int myText (std::string nameOFFile) {
    std::ifstream myFile;
    myFile.open(nameOFFile);
    std::string contentOfFile;
    if (myFile.is_open()) {
        while (getline(myFile, contentOfFile)) {
            numbLines++;
        }
        myFile.close();
        return numbLines;
    } else {
        return 0;
    }

}