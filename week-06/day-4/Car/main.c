#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct car {
    enum car_type type;
    long km;
    double gas;
};

const char* get_car_type(struct car car)
{
    switch (car.type)
    {
        case VOLVO: return "Volvo";
        case TOYOTA: return "Toyota";
        case LAND_ROVER: return "Land Rover";
        case TESLA: return "Tesla";
    }
}


void print_statistic (struct car car)
{
    if (car.type == TESLA)
        printf("Statistic -> Type: %s, Km: %lu.\n", get_car_type(car), car.km);
    else
        printf("Statistic -> Type: %s, Km: %lu, Gas: %.4lf.\n", get_car_type(car), car.km, car.gas);
}

int main()
{
    struct car car1 = {VOLVO, 120000, 3.8240};
    struct car car2 = {TESLA, 34000, 0};
    struct car car3 = {TOYOTA, 324500, 2.3453};
    struct car car4 = {LAND_ROVER, 443600, 4.345500};

    print_statistic(car1);
    print_statistic(car2);
    print_statistic(car3);
    print_statistic(car4);


    return 0;
}