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
    node_t* current = head;
    while(current->next != 0) {
        current = current->next;
    }
    current->next = (node_t*)malloc(sizeof(node_t));
    current->next->next = NULL;
    current->next->data = new_data;
}

void print_all_elements(node_t* head)
{
    printf("{ ");
    node_t* current = head;
    while(current->next != 0) {
        printf("%d", current->data);
        printf(", ");
        current = current->next;
    }
    if (current->next == NULL) {
        printf("%d }\n", current->data);
    }
}

void push_front(node_t** head, int new_data)
{
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node->data = new_data;
    new_node->next = (*head);
    (*head) = new_node;
}
