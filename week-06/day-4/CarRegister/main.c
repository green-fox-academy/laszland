#include <string.h>
#include <stdio.h>

/* Write a car register!
 * You should store the following data in a structure, called "car":
 *  - the manufacturer's name (which is shorter than 256 characters)
 *  - the price of the car (in euros, stored as a floating point number)
 *  - the year of manufacture
 *  - the type of the transmission (as a custom type, see below)
 *
 * You should store the transmission type in an enumeration ("transmission"),
 * the valid types are:
 *  - manual
 *  - automatic
 *  - CVT
 *  - semi-automatic
 *  - dual-clutch
 *
 * The "car"-s are stored in an array.
 *
 * Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission
 */

typedef enum transmission {
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_CLUTCH
} transmission_type;

typedef struct {
    char* name_manufacturer;
    float price;
    int year;
    transmission_type transmission;
} car_t;

int get_older_than(car_t* cars[], int length, int age)
{
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (cars[i]->year < age)
            counter++;
    }
    return counter;
}

int get_transmission_count(car_t* cars[], int length, transmission_type type)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if (cars[i]->transmission == type)
            counter++;
    }
    return counter;
}

int main()
{
    car_t car1 = {"Toyota", 210000, 2011, MANUAL};
    car_t car2 = {"Suzuki", 250000, 2012, MANUAL};
    car_t car3 = {"Mitsubishi", 270000, 2010, SEMI_AUTOMATIC};
    car_t car4 = {"Ford", 290000, 2009, DUAL_CLUTCH};
    car_t car5 = {"Citroen", 330000, 2008, AUTOMATIC};

    car_t* cars[] = {&car1, &car2, &car3, &car4, &car5};
    int length_of_cars = sizeof(cars) / sizeof(cars[0]);

    int older_than = get_older_than(cars, length_of_cars, 2011);
    int has_manual = get_transmission_count(cars, length_of_cars, MANUAL);

    printf("The number of cars which are older than %d: %d\n", 2011, older_than);
    printf("The number of cars which has manual transmission: %d\n", has_manual);

    return 0;
}