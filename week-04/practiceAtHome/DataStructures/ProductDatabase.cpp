#include <iostream>
#include <map>

void howMuchIsTheFish(std::map<std::string, int> myMap);
void mostExpensiveProduct(std::map<std::string, int> myMap);
float averagePrise(std::map<std::string, int> myMap);

int main () {

    std::map<std::string, int> products;
    products["eggs"] = 200;
    products["milk"] = 200;
    products["fish"] = 400;
    products["apples"] = 150;
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



