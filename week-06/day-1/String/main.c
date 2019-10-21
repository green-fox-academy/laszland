#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Create a program which asks for the name of the user and stores it
    // Create a function which takes a string as a parameter and returns the length of it
    // Solve this exercise with and without using string.h functions

    char name_of_user[1024];

    printf("What is your name?\n");
    scanf("%s", name_of_user);

    printf("Wow your name is %lu characters long.", strlen(name_of_user));

    return 0;
}