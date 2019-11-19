#include <iostream>
#include <map>

void payBob(std::map<std::string, float> listOfProducts, std::map<std::string, int> listOfBob);
void payAlice(std::map<std::string, float> listOfProducts, std::map<std::string, int> listOfAlice);
std::string moreRice(std::map<std::string, int> listOfBob, std::map<std::string, int> listOfAlice);
std::string morePotato(std::map<std::string, int> listOfBob, std::map<std::string, int> listOfAlice);
std::string moreProducts(std::map<std::string, int> listOfBob, std::map<std::string, int> listOfAlice);
std::string moreItem(std::map<std::string, int> listOfBob, std::map<std::string, int> listOfAlice);

int main() {
    std::map<std::string, float > productList;
    productList["Milk"] = 1.07f;
    productList["Rice"] = 1.59f;
    productList["Eggs"] = 3.14f;
    productList["Cheese"] = 12.60f;
    productList["Chicken Breasts"] = 9.40f;
    productList["Apples"] = 2.31f;
    productList["Tomato"] = 2.58f;
    productList["Potato"] = 1.75f;
    productList["Onion"] = 1.10f;

    std::map<std::string, int> shoppingListBob;
    shoppingListBob["Milk"] = 3;
    shoppingListBob["Rice"] = 2;
    shoppingListBob["Eggs"] = 2;
    shoppingListBob["Cheese"] = 1;
    shoppingListBob["Chicken Breasts"] = 4;
    shoppingListBob["Apples"] = 1;
    shoppingListBob["Tomato"] = 2;
    shoppingListBob["Potato"] = 1;

    std::map<std::string, int> shoppingListAlice;
    shoppingListAlice["Rice"] = 1;
    shoppingListAlice["Eggs"] = 5;
    shoppingListAlice["Chicken Breasts"] = 2;
    shoppingListAlice["Apples"] = 1;
    shoppingListAlice["Tomato"] = 10;

    //How much does Bob pay?
    //How much does Alice pay?
    //Who buys more Rice?
    //Who buys more Potato?
    //Who buys more different products?
    //Who buys more products? (piece)

    payBob(productList, shoppingListBob);
    payAlice(productList, shoppingListAlice);
    std::cout << moreRice(shoppingListBob, shoppingListAlice) << " has bought more rice." << std::endl;
    std::cout << morePotato(shoppingListBob, shoppingListAlice) << " has bought more potato." << std::endl;
    std::cout << moreProducts(shoppingListBob, shoppingListAlice) << " has bought more products." << std::endl;
    std::cout << moreItem(shoppingListBob, shoppingListAlice) << " has bought more items." << std::endl;


    return 0;
}

void payBob(std::map<std::string, float> listOfProducts, std::map<std::string, int> listOfBob) {
    float temp = 0;
    for (std::map<std::string, int>::iterator it = listOfBob.begin(); it != listOfBob.end(); it++) {
        temp += it -> second * listOfProducts[it->first];
    }
    std::cout << "Bob has to pay " << temp << " dollars." << std::endl;
}

void payAlice(std::map<std::string, float> listOfProducts, std::map<std::string, int> listOfAlice) {
    float temp = 0;
    for (std::map<std::string, int>::iterator it = listOfAlice.begin(); it != listOfAlice.end(); it++) {
        temp += it -> second * listOfProducts[it->first];
    }
    std::cout << "Alice has to pay " << temp << " dollars." << std::endl;
}

std::string moreRice(std::map<std::string, int> listOfBob, std::map<std::string, int> listOfAlice) {
    return listOfBob["Rice"] > listOfAlice["Rice"] ? "Bob" : "Alice";
}

std::string morePotato(std::map<std::string, int> listOfBob, std::map<std::string, int> listOfAlice) {
    return listOfBob["Potato"] > listOfAlice["Potato"] ? "Bob" : "Alice";
}

std::string moreProducts(std::map<std::string, int> listOfBob, std::map<std::string, int> listOfAlice) {

    return listOfBob.size() > listOfAlice.size() ? "Bob" : "Alice";
}

std::string moreItem(std::map<std::string, int> listOfBob, std::map<std::string, int> listOfAlice) {
    int sumOfItemBob = 0;
    int sumOfItemAlice = 0;

    for (std::map<std::string, int>::iterator it = listOfBob.begin(); it != listOfBob.end(); it++) {
        sumOfItemBob += it -> second;
    }

    for (std::map<std::string, int>::iterator it = listOfAlice.begin(); it != listOfAlice.end(); it++) {
        sumOfItemAlice += it -> second;
    }
    return listOfBob > listOfAlice ? "Bob" : "Alice";
}

