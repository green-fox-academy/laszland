#include <iostream>
#include <map>

void howMuchIsTheFish(std::map<std::string, int> myMap);
void mostExpensiveProduct(std::map<std::string, int> myMap);
float averagePrise(std::map<std::string, int> myMap);
void belowThreehundred(std::map<std::string, int> myMap);
bool for125(std::map<std::string, int> myMap);
void cheapestProduct(std::map<std::string, int> myMap);

int main () {

    std::map<std::string, int> products;
    products["eggs"] = 200;
    products["milk"] = 200;
    products["fish"] = 400;
    products["apples"] = 125;
    products["bread"] = 50;
    products["chicken"] = 550;

    //How much is the fish?
    //What is the most expensive product?
    //What is the average price?
    //How many products' price is below 300?
    //Is there anything we can buy for exactly 125?
    //What is the cheapest product?

    howMuchIsTheFish(products);
    mostExpensiveProduct(products);
    std::cout << "The average prise is: " << averagePrise(products) << std::endl;
    belowThreehundred(products);

    if (for125(products)) {
        std::cout << "There is something for 125." << std::endl;
    } else {
        std::cout << "There is nothing for 125." << std::endl;
    }

    cheapestProduct(products);

    return 0;
}

void howMuchIsTheFish(std::map<std::string, int> myMap) {
    std::cout << "The prise of fish is: " << myMap["fish"] << std::endl;
}

void mostExpensiveProduct(std::map<std::string, int> myMap) {
    int temp = 0;
    std::string tempProduct;
    for (std::map<std::string, int> ::iterator it = myMap.begin(); it != myMap.end(); it++) {
        if (it -> second > temp) {
            temp = it -> second;
            tempProduct = it -> first;
        }
    }
    std::cout << "The most expensive product is: " << tempProduct << " ; " << temp << std::endl;
}

float averagePrise(std::map<std::string, int> myMap) {
    int temp = 0;
    for (std::map<std::string, int>::iterator it = myMap.begin(); it != myMap.end(); it++) {
        temp += it -> second;
    }
    return ((float)temp / myMap.size());
}

void belowThreehundred(std::map<std::string, int> myMap) {
    std::cout << "The products under 300: " << std::endl;
    for (std::map<std::string, int>::iterator it = myMap.begin(); it != myMap.end(); it++) {
        if (it -> second < 300) {
            std::cout << it -> first << "; ";
        }
    }
    std::cout << std::endl;
}

bool for125(std::map<std::string, int> myMap) {
    for (std::map<std::string, int>::iterator it = myMap.begin(); it != myMap.end(); it++) {
        if (it -> second == 125) {
            return true;
        }
    }
    return false;
}

void cheapestProduct(std::map<std::string, int> myMap) {
    int temp = 0;
    std::string tempProduct;

    for (std::map<std::string, int>::iterator it = myMap.begin(); it != myMap.end(); it++) {
        if (it == myMap.begin()) {
            temp = it -> second;
            tempProduct = it -> first;
        } else if (it -> second < temp) {
            temp = it -> second;
            tempProduct = it -> first;
        }
    }
    std::cout << "The cheapest product is: " << tempProduct << "; " << temp << std::endl;
}



