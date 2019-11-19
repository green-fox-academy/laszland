#include <iostream>

int main(int argc, char* args[])
{
    // Create a simple calculator application which reads the parameters from the prompt
    // and prints the result to the prompt.

    // It should support the following operations: +, -, *, /, % and it should support two operands.
    // The format of the expressions must be: {operation} {operand} {operand}.
    // Examples:
    // "+ 3 3" (3 + 3 -> the result will be 6)
    // "* 4 4" (4 * 4 -> the result will be 16)
    // "/ 20 8" (20 / 8 -> the result will be 2)
    // "% 20 8" (20 % 8 -> the result will be 4)

    // It should work like this:
    // Start the program
    // It prints: "Please type in the expression:"
    // Waits for the user input
    // Print the result to the prompt
    // Exit

    char operation;
    int number1;
    int number2;
    std::cout << "Please type in the expression: ";
    std::cin >> operation >> number1 >> number2;

    if (operation == '+') {
        std::cout << number1 << " + " << number2 << " = " << number1 + number2 << std::endl;
    } else if (operation == '-') {
        std::cout << number1 << " - " << number2 << " = " << number1 - number2 << std::endl;
    } else if (operation == '*') {
        std::cout << number1 << " * " << number2 << " = " << number1 * number2 << std::endl;
    } else if (operation == '/') {
        std::cout << number1 << " / " << number2 << " = " << (float) number1 / number2 << std::endl;
    } else {
        std::cout << "The operation is invalid. Operation should be one of the followings: +, _, *, /" << std::endl;
    }

    return 0;
}