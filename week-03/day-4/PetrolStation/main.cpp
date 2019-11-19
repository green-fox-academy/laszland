#include <iostream>
#include "Station.h"
#include "Car.h"

int main() {

    Station station(100000);

    Car car1(3, 5);
    Car car2(4, 10);
    Car car3(3, 9);
    Car car4(4, 12);
    Car car5(6, 10);

    station.add(&car1);
    station.add(&car2);
    station.add(&car3);
    station.add(&car4);
    station.add(&car5);

    try {
        station.fill();
    } catch(std::string errorMassage) {
        std::cout << errorMassage << std::endl;
    };



    return 0;
}