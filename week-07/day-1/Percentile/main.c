#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Read the size of a matrix(don't have to be squared matrix) from the console.
//Allocate memory dynamically for the elements of the matrix, then read the elements.
//Create a function which can calculate the n-th percentile of the elements.
//Calculate the 80-th and the 90-th percentile.

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

int calculate_percentile(int* matrix, int size, int percentile)
{
    sorting(matrix, size);
    int temp = ceil(((double)percentile / 100) * size);
    return *(matrix + (temp - 1));

}


int main()
{
    int matrix_columns;
    int matrix_lines;

    // read the size of the matrix from console
    printf("How many columns does your matrix have?\n");
    scanf("%d", &matrix_columns);
    printf("How many lines does your matrix have?\n");
    scanf("%d", &matrix_lines);
    int size_of_matrix = matrix_columns * matrix_lines;


    // allocate memory for the matrix
    int* matrix = NULL;
    matrix = (int*)calloc(size_of_matrix, sizeof(int));

    // read the element of the matrix from console
    printf("Type the element of your matrix.\n");
    for (int i = 0; i < (matrix_columns * matrix_lines); ++i) {
        scanf("%d", matrix + i);
    }

    // call the percentile function
    int percentile = 100;
    int value_of_percentile = calculate_percentile(matrix, size_of_matrix, percentile);
    printf("The %d percentile is %d.\n", percentile, value_of_percentile);

    free(matrix);
    return 0;
}