#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free


int main()
{
    int* pointer = NULL;
    pointer = (int*)malloc(10 * sizeof(int));

    for(int i = 13; i < 23; i++) {
        *(pointer + (i-13)) = i;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d, ", *(pointer + i));
    }
    printf("\n");

    pointer = (int*)realloc(pointer, 0);

    return 0;
}