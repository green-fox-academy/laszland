#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char* string_concat(char arr1[], char arr2[])
{
    char* output_string = NULL;
    output_string = (char*)calloc(strlen(arr1) + strlen(arr2) + 1, sizeof(char));

    strcat(output_string, arr1);
    strcat(output_string, arr2);

    return output_string;
}

int main()
{
    char input1[] = "This is my first string. ";
    char input2[] = "And now this string is going to be very long in order to test my function because this the task to solve.";

    puts(string_concat(input1, input2));
    free(string_concat(input1, input2));

    return 0;
}