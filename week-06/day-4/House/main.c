#include <stdio.h>

/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/

typedef struct {
    char* address;
    float price;
    int rooms;
    int area;
} house_t;

int worth_to_buy(house_t* house)
{
    if ((house->price / house -> area) <= 400)
        return 1;
    else return 0;
}

int which_to_buy (house_t* house[], int length_of_array)
{
    int counter = 0;
    for (int i = 0; i < length_of_array; ++i) {
        if (worth_to_buy(house[i]))
            counter++;
    }
    return counter;
}

int main()
{
    house_t house1 = {"13 Firststreet", 1200, 6, 200};
    house_t house2 = {"15 Firststreet", 240000, 6, 270};
    house_t house3 = {"17 Firststreet", 780, 2, 80};
    house_t house4 = {"19 Firststreet", 587000, 7, 300};
    house_t house5 = {"21 Firststreet", 4900, 5, 250};

    house_t* list_of_houses[] = {&house1, &house2, &house3, &house4, &house5};
    int length_of_array = sizeof(list_of_houses) / sizeof(list_of_houses[0]);

    printf("How many houses worth to buy? %d", which_to_buy(list_of_houses, length_of_array));

    return 0;
}