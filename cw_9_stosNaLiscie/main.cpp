#include <iostream>
#include "list.h"

void clear(void) {
    while (getchar() != '\n');
}

void menu(void) {
    printf("SIMPLE LINKED STACK using structures\n");
    printf("1. Add an element\n");
    printf("2. Delete the last element\n");
    printf("3. Print the stack\n");
    printf("4. Clear stack\n\n");
    printf("0. Exit\n\n");
}

int main()
{
    int value = 0, index = 0, option = 0, errorCode = 0;

    while (1) {
        menu();
        while (!scanf("%d", &option)) {
            printf("Not an integer! Input an integer: ");
            clear();
        }
        switch (option) {
            case 1:
                printf("Input a number to be added: ");
                while (!scanf("%d", &value)) {
                    printf("Not an integer! Input an integer: ");
                    clear();
                }
                errorCode = insertBack(value);
                !errorCode ? printf("Added successfully!\n\n") : printf("Failed to add.\n\n");
                break;
            case 2:
                errorCode = deleteBack();
                !errorCode ? printf("Last element deleted successfully!\n\n") : printf("Failed to delete the last element.\n\n");
                break;
            case 3:
                printf("Stack: ");
                printList();
                printf("\n%d elements\n\n", getNodesCount());
                break;
            case 4:
                freeList();
                printf("Stack cleared.\n");
                break;
            case 0:
                freeList();
                return 0;
            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }
    freeList();
    return 0;
}