#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main ()
{

    FILE * fptr;                                                       // -- Creating FILE pointer --
    if(!(fptr = fopen("program.txt", "r"))) return -1; // -- Open the file + ERROR handling --

    char buffer[10];                                                  // -- Creating a char array as buffer --
    while (fgets(buffer, 10, fptr))                                   // -- Iterating the file and copying into the buffer --
        printf("%s", buffer);                                         // -- Printing out the buffer per line --

    return 0;
}