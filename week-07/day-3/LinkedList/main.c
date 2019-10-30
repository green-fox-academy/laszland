#include <stdio.h>

#include "LinkedList.h"

int main() {
    printf("Hello, World!\n");

    node_t* head = create_node(5);
    printf("%p\n", head);
    printf("%p\n", head->next);

    push_back(head, 10);
    printf("%p\n", head->next);
    push_back(head, 11);
    printf("%p\n", head->next);


    return 0;
}