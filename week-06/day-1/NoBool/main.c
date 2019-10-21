#include <stdio.h>

int is_even(int numb);

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)

    int users_number = 0;

    printf("Type your number: ");
    scanf("%d", &users_number);

    is_even(users_number) ? printf("Your number is even.\n") : printf("Your number is odd.\n");
    return 0;
}

int is_even(int numb)
{
    int output = 0;
    if (numb % 2 == 0)
        output = 1;
    return output;
}
