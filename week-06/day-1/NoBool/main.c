#include <stdio.h>


int are_they_equal(int a, int b);


int main()
{
    // Create a program which asks for two integers and stores them separately
    // Create a function which takes two numbers as parameters and
    // returns 1 if they are equal and returns 0 otherwise

    int numb1 = 0;
    int numb2 = 0;

    printf("Give me two number!\n");
    scanf("%d", &numb1);
    scanf("%d", &numb2);

    are_they_equal(numb1, numb2) ? printf("The two number are equal\n") : printf("The two number aren't equal.\n");

    return 0;
}

int are_they_equal(int a, int b)
{
    if (a == b)
        return 1;
    else return 0;
}