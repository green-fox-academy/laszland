#include <stdio.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

typedef struct Sandwich {
    char name[128];
    float price;
    float weight;
} sandwich_t;

float bill_calculator (sandwich_t sandwich, int amount_of_sandwich)
{
    return sandwich.price * amount_of_sandwich;
}

int main()
{
    sandwich_t sndwch1 = {"Meatball", 10.55,55.22};
    sandwich_t sndwch2 = {"HamAndEggs", 9.95,50.20};
    sandwich_t sndwch3 = {"Mushroom", 14.25,59.20};
    sandwich_t sndwch4 = {"VeganLove", 14.99,52.88};

    printf("You have to pay $%.2f.\n", bill_calculator(sndwch3, 3));
    printf("You have to pay $%.2f.\n", bill_calculator(sndwch2, 4));
    printf("You have to pay $%.2f.\n", bill_calculator(sndwch1, 1));
    return 0;
}