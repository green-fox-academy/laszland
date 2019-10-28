#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// The rich uncle has just died and you need to distribute his heritage among the relatives. The money you have to distribute is $1024
// Generate a random number between 20 and 50. This number will be the amount of relatives that showed up at the inheritance party.
// Allocate an array for them. Each element of the array will represent a relative.
// You need to generate a random number between 0 and the number of relatives to decide which one is the winner.
// The winner always gets the half of the remaining money. You need to generate random numbers until all the money is gone.
// Print the amount of money each relative got on the party. Print 0 for the unlucky ones.

//For example: 0,0,0,0,128,4,0,0,2,0,512,0,0,0,0,0,0,32,0,64,0,0,1,8,0,0,16,256

int generate_number_relatives()
{
    srand(time(NULL));
    return (rand() % 31) + 20;
}

void print_family(int* ptr, int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%d, ", *(ptr + i));
    }
    printf("\n");
}

int main()
{
    int money = 1024;
    int number_of_present_relatives = generate_number_relatives();
    printf("%d relatives appeared on the inheritance party.\n", number_of_present_relatives);

    int* list_of_relatives = (int*)calloc(number_of_present_relatives, sizeof(int));

    srand(time(NULL));
    while (money) {
        *(list_of_relatives + (rand() % (number_of_present_relatives + 1))) = money / 2;
        money = money / 2;
    }

    print_family(list_of_relatives, number_of_present_relatives);

    free(list_of_relatives);
    return 0;
}