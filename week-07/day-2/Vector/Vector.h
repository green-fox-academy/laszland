#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include <stdlib.h>
#include <stdio.h>

typedef enum {
    NO_ERROR = 0,
    EMPTY,
    OUT_OF_BOUNDS,
    INVALID_INDEX
} error_t;

typedef struct {
    int size;
    int capacity;
    int* data;
} vector_t;

void init(vector_t* vec, int capacity, error_t* error);
void push_back(vector_t* vec, int new_data, error_t* error);
int element_at(vector_t* vec, int index, error_t* error);
void print(vector_t vec, error_t* error);
void pop_back(vector_t* vec, error_t* error);
void destroy(vector_t* vec, error_t* error);
//int ask_new_index(vector_t* vec);
void insert_after(vector_t* vec, int index, int new_data, error_t* error);
void expand_capacity(vector_t* vec);
int get_size(vector_t* vec);
int get_capacity(vector_t* vec);
void decrease_capacity(vector_t* vec);
int is_empty(vector_t* vec);
void delete_by_index(vector_t* vec, int index, error_t* error);
int search_by_value(vector_t* vec, int value);

// todo: search
// todo: shuffle
// todo: unique value
// todo: transform



#endif //VECTOR_VECTOR_H


