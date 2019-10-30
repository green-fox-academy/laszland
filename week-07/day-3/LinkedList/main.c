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
    push_back(head, 65);
    push_back(head, 196);
    printf("%p\n", head->next);

    print_all_elements(head);

    push_front(&head, 12);
    push_front(&head, 78);

    print_all_elements(head);

    printf("The size of the list: %d\n", get_size(head));

    insert_after(head, 4, 123);
    print_all_elements(head);

    if (empty(head)) {
        printf("The list is empty");
    }
    else {
        printf("The list is not empty.\n");
        print_all_elements(head);
    }

    printf("The size of the list: %d\n", get_size(head));
    delete_front(&head);
    print_all_elements(head);
    printf("The size of the list: %d\n", get_size(head));




    return 0;
}