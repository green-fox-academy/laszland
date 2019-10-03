#include <iostream>
#include <string>
#include <fstream>

void printUsage() {
    std::cout <<  std::endl;
    std::cout <<  std::endl;
    std::cout << "$ ToDo" << std::endl;
    std::cout << "====================" << std::endl;
    std::cout <<  std::endl;
    std::cout <<  "Command Line arguments: " << std::endl;
    std::cout <<  "-l   Lists all the tasks" << std::endl;
    std::cout <<  "-a   Adds new tasks" << std::endl;
    std::cout <<  "-r   Removes a tasks" << std::endl;
    std::cout <<  "-c   Completes a tasks" << std::endl;
    std::cout <<  std::endl;
}

void listTasks() {
    // opening the listOfTask.txt
    std::ifstream myFile;
    myFile.open("listOfTasks.txt");
    if (myFile.is_open()) {
        std::cout << "Opening file is succeeded!" <<std::endl;
        std::cout << std::endl;
    } else {
        std::cout << "File opening ERROR" << std::endl;
        std::cout << std::endl;
    }

    // printing out the header of tasks
    std::cout << "Your tasks are: " << std::endl;
    std::cout << "======================== " << std::endl;

    // iteration + empty file function
    std::string printList;
    int count = 1;

    bool isEmpty = myFile.peek() == EOF;
    if (isEmpty) {
        std::cout << "No todos for today!" << std::endl;
        std::cout << std::endl;
    } else {
        while (getline(myFile, printList)) {
            std::cout << count << " - " << printList << std::endl;
            count++;
        }
        std::cout << std::endl;
    }
    myFile.close();

}

int main(int argc, char* args[]) {

    if (argc == 1) {
        printUsage();
    } else if (args[1] == std::string ("-l")) {
        listTasks();
    }

    return 0;
}