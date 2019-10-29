#include <stdio.h>

#include "Vector.h"

int main() {

    vector_t test_vector;
    error_t error;

    init(&test_vector, -1);
    print(test_vector, &error);

    for (int i = 0; i < 15; ++i) {
        push_back(&test_vector, i);
    }

    print(test_vector, &error);

    printf("The element at %d : %d\n", -1, element_at(&test_vector, -1));

    for (int j = 0; j < 4; ++j) {
        pop_back(&test_vector, &error);
    }


    print(test_vector, &error);

    for (int j = 0; j < 5; ++j) {
        pop_back(&test_vector, &error);
    }

    print(test_vector, &error);

    destroy(&test_vector, &error);


    return 0;
}