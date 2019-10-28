#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits


int main()
{
    int* pointer = NULL;

    // - - - MALLOC - - - //
    pointer = (int*)malloc(10 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        *(pointer + i) = i;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d, ", *(pointer + i));
    }
    printf("\n"),

    free(pointer);


    // - - - CALLOC - - - ///
    pointer = (int*)calloc(10, sizeof(int));

    for (int i = 0; i < 5; i++) {
        *(pointer + i) = i;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d, ", *(pointer + i));
    }
    printf("\n");

    free(pointer);

    return 0;
}