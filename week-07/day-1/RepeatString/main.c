#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.



char* repeat_string(char arr[], int number)
{
    char* output_string = NULL;
    output_string = (char*)malloc(number * strlen(arr) * sizeof(char) + 1);

    for (int i = 0; i < number; ++i) {
        strcat(output_string, arr);
    }
    return output_string;
}

int main()
{
    char word_to_repeate[] = "This is story of my pony.";
    int time_of_repeate = 100;

    char* temp = repeat_string(word_to_repeate, time_of_repeate);
    printf("%s", temp);

    free(temp);

    return 0;
}