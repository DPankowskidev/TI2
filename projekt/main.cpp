#include <iostream>
#include <stdio.h>
#include <string.h>
#include "line.h"

void menu(void) {
    printf("\n");
    printf("--- Menadzer Zadan ---\n");
    printf("1 - Pokaz liste zadan\n");
    printf("2 - Dodaj zadanie\n");
    printf("3 - Usun zadanie\n");
    printf("4 - Zmien status zadania\n");
    printf("5 - Zapisz liste zadan do pliku\n");
    printf("6 - Wczytaj liste z pliku\n");
    printf("0 - Wyjscie\n");
    printf("\n");
}

int main() {
    char temp[100];
    int opcja = 0;
    while (1) {
        menu();
        scanf("%d", &opcja);
        getchar();
        switch (opcja) {
            case 1:
                if (!isLineEmpty()) {
                    Kolejka();
                }
                else {
                    printf("Lista zadan jest pusta!\n");
                }
                break;
            case 2:
                printf("Podaj tresc zadania: ");
                fgets(temp, sizeof(temp), stdin);
                temp[strcspn(temp, "\n")] = '\0'; //usuwa znak nowej lini
                Push(temp);
                break;
            case 3:
                if (!isLineEmpty()) {
                    char* usunZadanie = Pop();
                    if (usunZadanie) {
                        printf("Usunieto zadanie: %s\n", usunZadanie);
                        free(usunZadanie);
                    }
                }
                else {
                    printf("Lista zadan jest pusta!\n");
                }
                break;
            case 4:
                zmStatus();
                break;
            case 5:
                zapisz();
                break;
            case 6:
                wczytaj();
                break;
            case 0:
                return 0;
            default:
                printf("Nieznana opcja.\n");
                break;
        }
    }
    return 0;
}

