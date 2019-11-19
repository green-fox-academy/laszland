#include <iostream>
#include <string>
#include <vector>
#include <map>

int main() {

    // LIST INTRODUCTION1
    /*std::vector<std::string> name;

    std::cout<< name.size() <<std::endl;

    name.push_back("William");
    std::cout<< name.empty()<<std::endl;

    name.push_back("John");
    name.push_back("Amanda");

    std::cout<<name.size()<<std::endl;
    std::cout<< name.at(2)<<std::endl;

    for (int i = 0; i < name.size(); i++) {
        std::cout<< name[i]<< ", ";
    }
    std::cout<<std::endl;

    for (int i = 0; i < name.size(); i++) {
        std::cout<< i+1 << " " << name[i]<< std::endl;
    }

    name.erase(name.begin() + 1);

    for (int i = name.size(); i >= 0; i--) {
        std::cout<< name[i] << std::endl;
    }

    name.clear();

    std::cout<< name.empty()<<std::endl;*/


    // MAP INTRODUCTION
    /*std::map<int , std::string> myMap;

    std::cout<< myMap.empty() << std::endl;

    myMap.insert(std::make_pair(97, "a"));
    myMap.insert(std::make_pair(98, "b"));
    myMap.insert(std::make_pair(99, "c"));
    myMap.insert(std::make_pair(65, "A"));
    myMap.insert(std::make_pair(66, "B"));
    myMap.insert(std::make_pair(67, "C"));

    std::cout<< myMap.empty() << std::endl;

    for (std::map<int, std::string>::iterator it=myMap.begin(); it!=myMap.end(); ++it)
        std::cout << it->first << '\n';

    for (std::map<int, std::string>::iterator it=myMap.begin(); it!=myMap.end(); ++it)
        std::cout << it->second << '\n';

    myMap.insert(std::make_pair(68, "D"));

    std::cout<< myMap.size() << std::endl;

    std::cout << myMap[99] << std::endl;

    myMap.erase(97);

    std::cout<< myMap.count(100) << std::endl;

    myMap.clear();*/


    // LIST INTRODUCTION2
    /*std::vector<std::string> ListA = {"Apple", "Avocado", "Blueberry", "Durian", "Lychee"};
    std::vector<std::string> ListB;

    for (int i = 0; i < ListA.size(); i++) {
        ListB.push_back(ListA[i]);
        std::cout << ListB[i] << ", ";
    }
    std::cout << std::endl;

    if (std::find(ListA.begin(), ListA.end(), "Durian") != ListA.end()) {
        std::cout << "ListA contains the element Durian." << std::endl;
    } else {
        std::cout << "ListA does not contain the element Durian." << std::endl;
    }

    ListB.erase(ListB.begin() + 3);

    ListA.insert(ListA.begin() + 5, "Kiwifruit");

    if (ListA.size() > ListB.size()) {
        std::cout << "ListA is bigger." << std::endl;
    } else {
        std::cout << "ListB is bigger." << std::endl;
    }

    for (int i = 0; i < ListA.size(); i++) {
        if (ListA.at(i) == "Avocado") {
            std::cout << i << std::endl;
        }
    }

    for (int i = 0; i < ListB.size(); i++) {
        if (ListB.at(i) == "Durian") {
            std::cout << i << std::endl;
        } else {

        }
    }

    std::string extraFruits = {"Passion Fruit", "Pomelo"};
    ListB.push_back(extraFruits);

    for (int i = 0; i < ListB.size(); i++) {
        std::cout << ListB[i] << ", ";
    }
    std::cout << std::endl;

    std::cout << ListA[2] << std::endl;*/


    // MAP INTRODUCTION
    std::map<std::string, std::string> ISBN;

    ISBN.insert(std::make_pair("978-1-60309-452-8", "A Letter to Jo"));
    ISBN.insert(std::make_pair("978-1-60309-459-7", "Lupus"));
    ISBN.insert(std::make_pair("978-1-60309-444-3", "Red Panda and Moon Bear"));
    ISBN.insert(std::make_pair("978-1-60309-461-0", "The Lab"));

    for (std::map<std::string, std::string>::iterator it = ISBN.begin(); it != ISBN.end(); it++) {
        std::cout << it -> second << " (ISBN: " << it -> first << ")" << std::endl;
    }

    ISBN.erase("978-1-60309-444-3");

    for (std::map<std::string, std::string>::iterator it = ISBN.begin(); it != ISBN.end(); it++ ) {
        if (it -> second == "The Lab") {
            ISBN.erase(it);
        }
    }

    std::cout << std::endl;

    for (std::map<std::string, std::string>::iterator it = ISBN.begin(); it != ISBN.end(); it++) {
        std::cout << it -> second << " (ISBN: " << it -> first << ")" << std::endl;
    }
    std::cout << std::endl;

    ISBN.insert(std::make_pair("978-1-60309-450-4", "They Called Us Enemy"));
    ISBN.insert(std::make_pair("978-1-60309-453-5", "Why Did We Trust Him?"));

    std::cout << ISBN.count("487-0-61159-424-8") << std::endl;
    std::cout << ISBN["978-1-60309-453-5"] << std::endl;


    return 0;
}