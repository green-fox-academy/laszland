#include <stdio.h>

int main() {
    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Use variables to store the information!
    //
    //  Example output:
    //  John Doe
    //  31
    //  1.87

    char name[512];
    int age = 0;
    float height = 0;

    printf("What is your name?\n");
    scanf("%s", name);
    printf("How old are you?\n");
    scanf("%d", &age);
    printf("How tall are you?\n");
    scanf("%f", &height);

    printf("Hello, %s, your are %d years old and %0.2f tall.", name, age, height);

    return 0;
}