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


int get_size(node_t* head)
{
    if(empty(head)) return 0;

    int counter = 1;
    node_t* current = head;
    while(current->next != 0){
        counter++;
        current = current->next;
    }
    return counter;
}


void insert_after(node_t* head, int index, int new_data)
{
    int counter = 0;
    node_t* current = head;
    while(current->next != 0){
        counter++;
        current = current->next;
        if (counter == (index)) {
            node_t* new_node = (node_t*)malloc(sizeof(node_t));
            new_node->data = new_data;
            new_node->next = current->next;
            current->next = new_node;
        }
    }
}


int empty(node_t* head)
{
    if(head == NULL) return 1;
    return 0;
}


void delete_front(node_t** head)
{
    node_t* temp = *head;
    (*head) = (*head)->next;
    free(temp);
}


void delete_by_value(node_t **head, int value)
{
    node_t* current = *head;
    node_t* previous_node;

    // check the head
    if(current != NULL && current->data == value) {
        *head = current->next;
        free(current);
        return;
    }

    // check the other nodes and delete it
    while(current != NULL && current->data != value) {
        previous_node = current;
        current = current->next;
    }
    if(current == NULL) return;
    previous_node->next = current->next;
    free(current);
}


node_t* search_by_value(node_t* head, int value)
{
    node_t* current = head;
    node_t* previous_node;

    // check the head
    if(current != NULL && current->data == value) {
        return head;
    }

    while(current != NULL && current->data != value) {
        previous_node = current;
        current = current->next;
    }
    return previous_node->next;
    if(current == NULL) return NULL;
}
