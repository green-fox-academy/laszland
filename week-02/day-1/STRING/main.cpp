#include <iostream>
#include <string>

void reverse(std::string) {

}

int main (int argc, char* args[]) {

    // SIMPLE REPLACE
    /*std::string example("In a dishwasher far far away");
    std::string correct( "galaxy "); //creating a new string

    example.replace(5, 11, correct); // <nameOfString>.replace(fromThisCharacter, thatManyCharacter, fromThisString);

    std::cout << example << std::endl; */


    //URL FIXER
    /*std::string url("https//www.reddit.com/r/nevertellmethebots");

    url.insert(5, ":"); // .insert(<where>, <what>)
    url.replace(url.find("bots"), 4, "odds");

    std::cout<< url << std::endl;*/


    // TAKES LONGER
    /*std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");
    std::string newLine(" always takes longer than ");
    quote.replace(quote.find("It")+2, 1, newLine);
    // .find => returns index number as int; +2 => add the new line from this index

    std::cout << quote << std::endl;*/


    // TODO PRINT
    /*std::string todoText = " - Buy milk\n";

    todoText.insert(0, "My TODO:\n");
    todoText.insert(todoText.find("k\n")+2, " - Download games\n");
    todoText.insert(todoText.find("s\n")+2, "\t-Diablo");

    std::cout << todoText << std::endl;*/


    //REVERSE

    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";

    for (int i = reversed.size()-1; i>=0; i--) {
        std::cout << reversed.at(i);
    }

    // Create a method that can reverse an std:string, which is passed as the parameter
    // Use it on this reversed string to check it!
    // Try to solve this using .at() first, and optionally anything else after.
    // Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.

    //std::cout << reverse(reversed) << std::endl;


    return 0;
}