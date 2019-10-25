#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int count_lines(char* name_of_file);


int main ()
{
    int number_of_lines = count_lines("lines.txt");
    printf("The file has %d lines.\n", number_of_lines);
    return 0;
}

int count_lines(char* name_of_file)
{
    FILE * fptr;
    fptr = fopen(name_of_file, "r");
    if (fptr == NULL) return 0;


    int line_counter = 0;
    char buffer[100];
    while(fgets(buffer, 100, fptr)) line_counter++;
    return line_counter;
}