#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    int data;
    struct node* next;
} node_t;

node_t* create_node(int new_data);
void push_back(node_t* head, int new_data);
void print_all_elements(node_t* head);
void push_front(node_t** head, int new_data);
int get_size(node_t* head);
void insert_after


#endif //LINKEDLIST_LINKEDLIST_H
