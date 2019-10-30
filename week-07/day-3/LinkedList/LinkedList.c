#include "LinkedList.h"

node_t* create_node(int new_data)
{
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

void push_back(node_t* head, int new_data)
{
    while(head->next != 0)
        head->next = (head->next)->next;
    head->next = create_node(new_data);
    return;
}

void set_up_tail(node_t* node)
{
    node->next = NULL;
}

void set_up_next(node_t* previous_node, node_t* new_node)
{
    if (!previous_node) return;
    previous_node->next = new_node;
}

