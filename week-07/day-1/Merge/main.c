
#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// the resulting array should be 20 elements long
// print the array in descending order
// delete the arrays after you don't use them


void sorting(int* ptr, int numb)
{
    int temp = 0;
    int ready = 0;
    while (!ready){
        ready = 1;
        for (int i = 0; i < numb - 1; i++) {
            if (*(ptr + i) > *(ptr + i + 1)) {
                temp = *(ptr + i + 1);
                *(ptr + i + 1) = *(ptr + i);
                *(ptr + i) = temp;
                ready = 0;
            }
        }
    }
}

int main()
{
    int* even_ptr = NULL;
    even_ptr = (int*)malloc(10 * sizeof(int));

    int* odd_ptr = NULL;
    odd_ptr = (int*)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
        *(even_ptr + i) = (i + 1) * 2;
        *(odd_ptr + i) = (i * 2) + 1;
    }

    for (int j = 0; j < 10; j++) {
        printf("%d. elements %d and %d\n", j + 1, *(even_ptr + j), *(odd_ptr + j));
    }

    even_ptr = (int*)realloc(even_ptr, 20);

    for (int k = 0; k < 10; k++) {
        *(even_ptr + (k + 10)) = *(odd_ptr + k);
    }

    for (int i = 0; i < 20; i++) {
        printf("%d, ", *(even_ptr + i));
    }
    printf("\n");

    sorting(even_ptr, 20);

    for (int i = 0; i < 20; i++) {
        printf("%d, ", *(even_ptr + i));
    }
    printf("\n");

    for (int i = 19; i >= 0; i--) {
        printf("%d, ", *(even_ptr + i));
    }
    printf("\n");

    free(even_ptr);
    free(odd_ptr);

    return 0;
}