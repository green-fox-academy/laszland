#include <stdio.h>
#include <stdlib.h>

int is_it_prime(int number);

int main()
{
    // Create a program which asks for a number and stores it 
    // Create a function which takes a number as a parameter 
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)

    int user_number;

    printf("Type a positive, whole number! ");
    scanf("%d", &user_number);

    is_it_prime(user_number) ? printf("Your number is prime.\n") : printf("Your number is not prime.\n");

    return 0;
}

int is_it_prime(int number)
{
    int output = 1;
    int i;
    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            output = 0;
            return output;
        }
    }
    return output;
}