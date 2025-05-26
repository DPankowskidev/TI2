#include <iostream>
#include "list.h"

void clear(void) {
    while (getchar() != '\n');
}

void menu(void) {
    printf("SIMPLE LINKED QUE using structures\n");
    printf("1. Add an element\n");
    printf("2. Delete the first element\n");
    printf("3. Print the que\n");
    printf("4. Clear que\n\n");
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
            case 1: // add at the back
                printf("Input a number to be added: ");
                while (!scanf("%d", &value)) {
                    printf("Not an integer! Input an integer: ");
                    clear();
                }
                errorCode = insertBack(value);
                !errorCode ? printf("Added successfully!\n\n") : printf("Failed to add.\n\n");
                break;
            case 2: // delete the first element
                errorCode = deleteFront();
                !errorCode ? printf("First element deleted successfully!\n\n") : printf("Failed to delete the first element.\n\n");
                break;
            case 3: // print the que
                printf("Que: ");
                printList();
                printf("\n%d elements\n\n", getNodesCount());
                break;
            case 4: // clear the que
                freeList();
                printf("Que cleared.\n");
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