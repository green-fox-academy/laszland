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

    std::string printList;
    int count = 1;
    bool isEmpty = myFile.peek() == EOF; // boolean about is myFile empty or not
    if (isEmpty) {
        std::cout << "No todos for today!" << std::endl;
        std::cout << std::endl;
    } else {
        while (getline(myFile, printList)) {
            std::cout << count << " - " << printList << std::endl;
            count++;
        }
    }
    std::cout << std::endl;
    myFile.close();
}

void addNewTask(std::string newTask) {
    // opening the listOfTask.txt
    std::ofstream myFile;
    myFile.open("listOfTasks.txt", std::ios::app);
    if (myFile.is_open()) {
        std::cout << "Opening file is succeeded!" <<std::endl;
        std::cout << std::endl;
    } else {
        std::cout << "File opening ERROR" << std::endl;
        std::cout << std::endl;
    }

    myFile << newTask;
    std::cout << "Task is added." << std::endl;
    myFile.close();
}

void removeTask(int indexOfTask) {
    // open source file
    std::ifstream myFile;
    myFile.open("listOfTasks.txt");
    std::ofstream temp;
    temp.open("temp.txt");


    int count = 1;
    std::string listOfTasks;

    while (getline(myFile, listOfTasks)) {
        if (count != indexOfTask) {
            temp << listOfTasks << std::endl;
            count++;
        } else {
            count++;
        }
    }
    temp.close();
    myFile.close();
    remove("listOfTasks.txt");
    rename("temp.txt", "listOfTasks.txt");
}

void checkTask(int indexOfTask) {
    std::ifstream myFile;
    myFile.open("listOfTasks.txt");
    std::ofstream temp;
    temp.open("temp.txt");

    int count = 1;
    std::string readingTask;

    while (getline(myFile, readingTask)) {
        if (count != indexOfTask) {
            temp << readingTask << std::endl;
            count++;
        } else {
            temp << readingTask + " -> [ DONE ]" << std::endl;
            count++;
        }
    }
    temp.close();
    myFile.close();
    remove("listOfTasks.txt");
    rename("temp.txt", "listOfTasks.txt");
}


int main(int argc, char* argv[]) {

    if (argc == 1) {
        printUsage();
    } else if (argv[1] == std::string ("-l")) {
        listTasks();
    } else if (argv[1] == std::string ("-a")) {
        if (argc ==  2) {
            std::cout << "You didn't added any task. Please, type your task after -a!" << std::endl;
        } else {
            addNewTask(argv[2]);
        }
    } else if (argv[1] == std::string ("-r")) {
        if (argc == 2) {
            std::cout << "Which task want you to remove? Please, type its index after -r!" << std::endl;
        } else {
            removeTask(std::stoi(argv[2]));
        }
    } else if (argv[1] == std::string ("-c")) {
        if (argc == 2) {
            std::cout << "Which task want you to check? Please, type its index after -c!" << std::endl;
        } else {
            checkTask(std::stoi(argv[2]));
        }
    }

    return 0;
}