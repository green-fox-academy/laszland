#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

void write_into_file(char *path, char *word, int number);

int main ()
{
    FILE * fptr;
    fptr = fopen("my-file.txt", "w");
    if (fptr == NULL)
        printf("There is an ERROR.");

    char my_name[] = "Laszlo Roland Kiss";
    fprintf(fptr, "%s", my_name);

    fclose(fptr);

    char path[] = "../../CountLines/cmake-build-debug/lines.txt";
    char word[] = "I'm maniac.";
    int number = 100;

    write_into_file(path, word, number);


    return 0;
}

void write_into_file(char *path, char* word, int number)
{
    FILE * file_ptr;
    file_ptr = fopen(path, "a");
    if (file_ptr == NULL)
        printf("There is an ERROR.");

    for(int i = 0; i < number; i++)
        fprintf(file_ptr, "%s\n", word);
    fclose(file_ptr);
}