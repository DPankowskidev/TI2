#include <iostream>
#include <stdio.h>
#include "line.h"

void menu(void){
    printf("\n");
    printf("1 - poloz liczbe na kolejke (Push)\n");
    printf("2 - odczytaj wartosc ze szczytu kolejki (Top)\n");
    printf("3 - zdejmij liczbe z kolejki (Pop)\n");
    printf("4 - sprawdz czy kolejka jest pusta\n");
    printf("5 - sprawdz czy kolejka jest pelna\n");
    printf("6 - koniec programu\n");
    printf("\n");
}

int main(){
    int temp = 0;
    int option = 0;
    printf("KOLEJKA - implementacja w tablicy statycznej\n");
    while (1){
        menu();
        scanf("%d", &option);
        switch (option){
            case 1:
                if ( !isLineFull() ){
                    printf("Podaj wartosc: ");
                    scanf("%d", &temp);
                    Push(temp);
                }
                else {
                    printf("operacja niedozwolona KOLEJKA pelna!!!\n\n");
                }
                break;
            case 2:
                if (!isLineEmpty()){
                    temp = Top();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona KOLEJKA pusta!!!\n\n");
                }
                break;
            case 3:
                if (!isLineEmpty()){
                    temp = Pop();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona KOLEJKA pusta!!!\n\n");
                }
                break;
            case 4:
                if (isLineEmpty()){
                    printf("KOLEJKA jest pusta.\n");
                }
                else {
                    printf("KOLEJKA nie jest pusta.\n");
                }
                break;
            case 5:
                if (isLineFull()){
                    printf("KOLEJKA jest pelna.\n");
                }
                else {
                    printf("KOLEJKA nie jest pelna.\n");
                }
                break;
            case 6:
                //zakonczenie programu
                return 0;
            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }
    return 0;
}