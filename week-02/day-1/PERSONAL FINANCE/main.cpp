#include <iostream>
#include <vector>
#include <algorithm>


int main() {

    std::vector<int> expenses = {500, 1000, 1250, 175, 800, 120};

    int sumExpenses = 0;
    int tempExpenses;

    for (int var : expenses) {
        tempExpenses = 0;
        tempExpenses = var;
        sumExpenses = sumExpenses + tempExpenses;
    }
    std::cout << "The sum of expenses is : "<< sumExpenses << std::endl;
    std::cout << "The average expense is : " << (float) sumExpenses / expenses.size() << std::endl;

    /*Using the std lib sort function is kind of cheating here. 
    I know that it is easier to use, but you should have excersised iterating through a vector 
    and searching for the minimal value.*/
    std::sort(expenses.begin(), expenses.end());

    std::cout << expenses[0] << std::endl;
    std::cout << expenses[expenses.size()-1] << std::endl;



    return 0;
}
