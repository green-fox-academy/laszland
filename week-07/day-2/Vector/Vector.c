#include "Vector.h"



void init(vector_t* vec, int capacity, error_t* error)
{
    *error = NO_ERROR;
    if (capacity <= 0) {
        //printf("ERROR: Invalid value for capacity. Default value (3) set up.\n");
        //init(vec, 3);
        *error = EMPTY;
        return;
    }
    vec->data = (int*)calloc(capacity, sizeof(int));
    vec->capacity = capacity;
    vec->size = 0;
}


void push_back(vector_t* vec, int new_data, error_t* error)
{
    *error = NO_ERROR;
    if (vec->size >= vec->capacity) {
        expand_capacity(vec);
    }

    vec->data[vec->size] = new_data;
    vec->size++;
}


int element_at(vector_t* vec, int index, error_t* error)
{
    *error = NO_ERROR;
    if (index > vec->size - 1 || index < 0) {
        //return  ask_new_index(vec);
        *error = OUT_OF_BOUNDS;
    }
    return vec->data[index];
}


void pop_back(vector_t* vec, error_t* error)
{
    *error = NO_ERROR;
    if(vec->size == 0) {
        *error = INVALID_INDEX;
    }
    vec->size--;
    if (vec->size == (vec->capacity / 2)) {
        decrease_capacity(vec);
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

/*
int ask_new_index(vector_t* vec)
{
    int temp = 0;
    printf("ERROR: Invalid index number. Type a new index number between 0 and %d! ", vec->size);
    scanf("%d", &temp);
    return element_at(vec, temp);
}
*/

void insert_after(vector_t* vec, int index, int new_data, error_t* error)
{
    *error = NO_ERROR;
    if (index < 0 || index > vec->size - 1) {
        *error = INVALID_INDEX;
        return;
    }
    vec->size++;
    if (vec->size > vec->capacity)
        expand_capacity(vec);
    for (int i = vec->size - 1; i >= 0; --i) {
        if (i > (index + 1)) {
            vec->data[i + 1] = vec->data[i];
        } else if (i == index + 1) {
            vec->data[i + 1] = vec->data[i];
            vec->data[index + 1] = new_data;
        }
    }
}

void expand_capacity(vector_t* vec)
{
    vec->capacity *= 2;
}

int get_size(vector_t* vec)
{
    return vec->size;
}

int get_capacity(vector_t* vec)
{
    return vec->capacity;
}

void decrease_capacity(vector_t* vec)
{
    vec->capacity = vec->size;
}

int is_empty(vector_t* vec)
{
    if(vec->size) return 0;
    return 1;
}

void delete_by_index(vector_t* vec, int index, error_t* error)
{
    *error = NO_ERROR;
    if (index < 0 || index > vec->size - 1) {
        *error = INVALID_INDEX;
    }

    for (int i = 0; i < vec->size; ++i) {
        if (i >= index) {
            vec->data[i] = vec->data[i + 1];
        }
    }
    vec->size--;
}

int search_by_value(vector_t* vec, int value)
{
    int index_found = -1;
    for (int i = 0; i < vec->size; ++i) {
        if (vec->data[i] == value) {
            index_found = i;
        }
    }
    return index_found;
}