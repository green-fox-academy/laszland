#include <stdio.h>

#include "LinkedList.h"

int main() {
    printf("Hello, World!\n");

    node_t* head = create_node(5);
    printf("%p\n", head);

    push_back(&head, 10);

    while (head->next != 0) {
        printf("node %p : next %p \n", &head, head->next);
    }

    return 0;
}