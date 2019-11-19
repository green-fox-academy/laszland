#include <iostream>
#include <string>
#include <vector>

void quoteSwap(std::vector<std::string> quote);

int main(int argc, char* args[])
{
    std::vector<std::string> quote = {"What", "I", "do", "create,", "I", "cannot", "not", "understand."};

    // Accidentally I messed up this quote from Richard Feynman.
    // Two words are out of place
    // Your task is to fix it by swapping the right words with code
    // Create a method called quoteSwap().

    // Also, print the sentence to the output with spaces in between.

    quoteSwap(quote);

    return 0;
}

void quoteSwap(std::vector<std::string> quote) {
    for (int i = 0; i < quote.size(); ++i) {
        if (i == 2) {
            quote.erase(quote.begin() + 2);
            quote.erase(quote.begin() + 4);
            quote.insert(quote.begin() + 2, "cannot");
        } else if (i == 5) {
            quote.insert(quote.begin() + 5, "do");
        }
    }
    for (int j = 0; j < quote.size(); ++j) {
        std::cout << quote[j] << " ";
    }
    std::cout << std::endl;
}