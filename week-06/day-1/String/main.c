#include <stdio.h>
#include <stdlib.h>

int count_characters(char * name);


int main()
{
    // Create a program which asks for the name of the user and stores it
    // Create a function which takes a string as a parameter and returns the length of it
    // Solve this exercise with and without using string.h functions

    char name_of_user[1024];

    printf("What is your name?\n");
    scanf("%s", name_of_user);


    printf("Wow your name is %d characters long.", count_characters(name_of_user));

    return 0;
}

int count_characters(char * name)
{
    int size = 0;
    while (*name++) ++size;

    /*
    for (int i = 0; name[i] != '\0'; ++i) {
        size++;
    }
     */

    return size;
}