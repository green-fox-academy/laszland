#include "Vector.h"



void init(vector_t* vec, int capacity)
{
    if (capacity <= 0) {
        printf("ERROR: Invalid value for capacity. Default value (3) set up.\n");
        init(vec, 3);
        return;
    }
    vec->data = (int*)calloc(capacity, sizeof(int));
    vec->capacity = capacity;
    vec->size = 0;
}


void push_back(vector_t* vec, int new_data)
{
    if (vec->size >= vec->capacity) {
        vec->capacity *= 2;
    }

    vec->data[vec->size] = new_data;
    vec->size++;
}


int element_at(vector_t* vec, int index)
{
    if (index > vec->size - 1 || index < 0) {
        return  ask_new_index(vec);
    }
    return vec->data[index];
}


void pop_back(vector_t* vec, error_t* error)
{
    *error = NO_ERROR;
    vec->size--;
    if (vec->size == (vec->capacity / 2)) {
        vec->capacity = vec->size;
    }
}


void print(vector_t vec, error_t* error)
{
    *error = NO_ERROR;
    printf("{ ");
    for (int i = 0; i < vec.capacity; ++i) {
        if (i <= vec.size - 1) {
            printf("%d", vec.data[i]);
        } else {
            printf("_");
        }

        if (i < vec.capacity - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}


void destroy(vector_t* vec, error_t* error)
{
    *error = NO_ERROR;
    vec->size = 0;
    vec->capacity = 0;
    free(vec->data);
}

int ask_new_index(vector_t* vec)
{
    int temp = 0;
    printf("ERROR: Invalid index number. Type a new index number between 0 and %d! ", vec->size);
    scanf("%d", &temp);
    return element_at(vec, temp);
}
