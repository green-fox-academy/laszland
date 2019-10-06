#include <iostream>
#include <string>
#include <vector>


int sumSpendings(std::vector<int> spendings);
int greatestExpence(std::vector<int> spendings);
int cheapestSpending(std::vector<int> spendings);
float averageSpendings(std::vector<int> spendings);


int main(int argc, char* args[])
{
    //Create a list with the following items.
    //500, 1000, 1250, 175, 800 and 120
    //Create an application which solves the following problems.
            //How much did we spend?
            //Which was our greatest expense?
            //Which was our cheapest spending?
            //What was the average amount of our spendings?

    std::vector<int> mySpendings = {5000, 1000, 1250, 1750, 8300, 120};
    std::cout << "We spend " << sumSpendings(mySpendings) << "." << std::endl;
    std::cout << "The greatest expense was: " << greatestExpence(mySpendings) << std::endl;
    std::cout << "The cheapest spending was: " << cheapestSpending(mySpendings) << std::endl;
    std::cout << "The average spending was: " << averageSpendings(mySpendings) << std::endl;


    return 0;
}

int sumSpendings(std::vector<int> spendings) {
    int sumOfVector = 0;
    for (int i = 0; i < spendings.size(); ++i) {
        sumOfVector += spendings[i];
    }
    return sumOfVector;
}

int greatestExpence(std::vector<int> spendings) {
    int temp = 0;
    for (int i = 0; i < spendings.size(); ++i) {
        if (temp < spendings[i]) {
            temp = spendings[i];
        }
    }
    return temp;
}


int cheapestSpending(std::vector<int> spendings) {
    int temp = 0;
    for (int i = 0; i < spendings.size(); ++i) {
        if (i == 0) {
            temp = spendings[0];
        } else if (temp > spendings[i]) {
            temp = spendings[i];
        }
    }
    return  temp;
}

float averageSpendings(std::vector<int> spendings) {
    return (sumSpendings(spendings) / spendings.size());
}