#include <stdio.h>

#include "Vector.h"

int main() {

    vector_t test_vector;
    error_t error;

    init(&test_vector, -2, &error);
    if (error) {
        printf("ERROR: Invalid value for capacity.\n");
    }
    init(&test_vector, 4, &error);


    print(test_vector, &error);
    if (is_empty(&test_vector)) {
        printf("Your vector is empty.\n");
    }

    for (int i = 0; i < 15; ++i) {
        push_back(&test_vector, i, &error);
    }

    print(test_vector, &error);
    if (!is_empty(&test_vector)) {
        printf("Your vector is not empty.\n");
    }


    printf("The element at %d : %d\n", 3, element_at(&test_vector, 3, &error));

    for (int j = 0; j < 4; ++j) {
        pop_back(&test_vector, &error);
    }


    print(test_vector, &error);

    for (int j = 0; j < 5; ++j) {
        pop_back(&test_vector, &error);
    }

    print(test_vector, &error);

    insert_after(&test_vector, 4, 12, &error);
    print(test_vector, &error);
    insert_after(&test_vector, -2, 12, &error);
    if (error) {
        printf("ERROR: Invalid index.\n");
    }
    insert_after(&test_vector, 0, 12, &error);
    insert_after(&test_vector, 6, 12, &error);
    print(test_vector, &error);
    printf("The size of the vector: %d\n" , get_size(&test_vector));
    printf("The capacity of the vector: %d\n" , get_capacity(&test_vector));

    delete_by_index(&test_vector, 1, &error);
    print(test_vector, &error);
    printf("The size of the vector: %d\n" , get_size(&test_vector));

    destroy(&test_vector, &error);


    return 0;
}