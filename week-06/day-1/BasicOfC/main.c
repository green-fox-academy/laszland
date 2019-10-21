#include <stdio.h>

int main() {
    // Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22

    // Print the result of 13 subtracted from 22

    // Print the result of 22 multiplied by 13

    // Print the result of 22 divided by 13 (as a decimal fraction)

    // Print the remainder of 22 divided by 13

    // Store the results in variables and use them when you display the result

    int numbA = 22;
    int numbB = 13;

    int added = numbA + numbB;
    int subtract = numbA - numbB;
    int multiplied = numbA * numbB;
    float divided = (float) numbA / numbB;
    int remainder = numbA % numbB;

    printf("22 + 13 = %d\n", added);
    printf("22 - 13 = %d\n", subtract);
    printf("22 * 13 = %d\n", multiplied);
    printf("22 / 13 = %.4f\n", divided);
    printf("22 %% 13 = %d\n", remainder);


    return 0;
}