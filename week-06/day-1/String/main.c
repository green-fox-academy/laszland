#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int are_they_identical(char * word1, char * word2);

int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    char user_input1[1024];
    char user_input2[1024];

    printf("Type me two words!\n");
    scanf("%s", user_input1);
    scanf("%s", user_input2);

    are_they_identical(user_input1, user_input2) ? printf("They are identical.\n") : printf("They aren't identical.\n");

    return 0;
}

int are_they_identical(char * word1, char * word2)
{
    int output = 1;
    if (strlen(word1) != strlen(word2)) {
        output = 0;
        return output;
    } else {
        for (int i = 0; i < strlen(word1); ++i) {
            if (word1[i] != word2[i]) {
                output = 0;
                return output;
            }
        }

    }
    return output;
}