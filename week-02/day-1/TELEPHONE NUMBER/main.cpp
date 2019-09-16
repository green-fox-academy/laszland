#include <iostream>
#include <map>
#include <vector>

int main() {
    std::map<std::string, std::string> PhoneBook;

    PhoneBook.insert(std::make_pair("Willian A. Lathan", "405-709-1865"));
    PhoneBook.insert(std::make_pair("John K. Miller", "402-247-8568"));
    PhoneBook.insert(std::make_pair("Hortensia E. Foster", "606-481-6467"));
    PhoneBook.insert(std::make_pair("Amanda D. Newland", "319-243-5613"));
    PhoneBook.insert(std::make_pair("Brooke P. Askew", "307-687-2982"));

    for (std::pair<std::string, std::string> myPair : PhoneBook) {
        std::cout << myPair.first << " : " << myPair.second << std::endl;
    }

    for (std::pair<std::string, std::string> myPair : PhoneBook) {
        if (myPair.first == "John K. Miller") {
            std::cout << "John K. Miller's phone number is: " << myPair.second << std::endl;
        } else if (myPair.second == "307-687-2982") {
            std::cout << "The phone number 307-687-2982 belongs to: " << myPair.first << std::endl;
        }
    }

    std::cout << "Do we know Chris E. Myers' phone number?" << std::endl;
    if (PhoneBook.count("Chris E. Myers")) {
        std::cout << "Yes, we know." << std::endl;
    } else {
        std::cout << "No, unfortunatelly we don't know." << std::endl;
    }

    return 0;
}