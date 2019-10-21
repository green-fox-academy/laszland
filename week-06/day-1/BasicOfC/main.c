#include <stdio.h>

int main() {

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stored number is lower
    // You found the number: 8

    int number = 9;
    int users_guess = 0;

    while (number != users_guess) {
        printf("Type your guess!\n");
        scanf("%d", &users_guess);
        if (users_guess > number) {
            printf("The stored number is lower.\n");
        } else if (users_guess < number) {
            printf("The stored number is higher.\n");
        }
    }
    printf("You found the number: %d", number);

    return 0;
}