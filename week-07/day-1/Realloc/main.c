#include <stdio.h>
#include <stdlib.h>

// Please use the realloc function where applicable!
// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int* user_number = NULL;
    user_number = (int*)malloc(sizeof(int));
    printf("Give me a positive integer! ");
    scanf("%d", user_number);


    int* sum_users_numbers = NULL;
    sum_users_numbers = (int*)malloc(*user_number * sizeof(int));
    for (int i = 0; i < *user_number; ++i) {
        int temp = 0;
        printf("Give me a positive integer: ");
        scanf("%d", &temp);
        *sum_users_numbers += temp;
    }

    user_number = (int*)realloc(user_number, *sum_users_numbers * sizeof(int));
    for (int j = 0; j < *sum_users_numbers; ++j) {
        *(user_number + j) = j + 1;
    }

    for (int j = 0; j < *sum_users_numbers; ++j) {
        printf("%d, ", *(user_number + j));
    }
    printf("\n");

    free(user_number);
    free(sum_users_numbers);

    return 0;
}