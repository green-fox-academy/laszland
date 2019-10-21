#include <stdio.h>
#define OVER_AGE 18

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary

    int age_of_user = 0;
    int is_over_age = 0;

    printf("How old are you? ");
    scanf("%d", &age_of_user);

    if (age_of_user >= OVER_AGE)
        is_over_age = 1;

    if (is_over_age)
        printf("You are aloud to drink alcohol in Hungary");
    else
        printf("You are not aloud to drink alcohol in Hungary.");


    return 0;
}