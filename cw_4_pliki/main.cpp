#include <iostream>
#include "funkcje.h"

void menu(){
    printf("1 - wyswietl tablice\n");
    printf("2 - edytuj tablice\n");
    printf("3 - edytuj komorke\n");
    printf("4 - najwieksza wartosc\n");
    printf("5 - najmniejsza wartosc\n");
    printf("6 - wartosc srednia\n");
    printf("7 - zapisz dane\n");
    printf("8 - odczytaj dane\n");
    printf("0 - zamknij program\n");
    printf("wybierz opcje:\n");
}
int blad;



int main() {
    int tablica[] = {1,2,3,4,5,6,7,8,9,0};
    int option = 0;

    do{
        menu();
        scanf("%d", &option);
        switch(option) {
            case 1:
                wyswtab(tablica);
                break;
            case 2:
                edycja(tablica);
                wyswtab(tablica);
                break;
            case 3:
                kom(tablica);
                break;
            case 4:
                max(tablica);
                break;
            case 5:
                min(tablica);
                break;
            case 6:
                srednia(tablica);
                break;
            case 7:
                zapis(tablica);
                if(odczyt(tablica) == 0){
                printf("zapisano tablice w pamieci\n");
                wyswtab(tablica);
                }
                break;
            case 8:
                odczyt(tablica);
                if(odczyt(tablica) == 0){ 
                    printf("odczytano tablice z pamieci\n");
                    wyswtab(tablica);
                }
                else{
                    printf("blad odczytu\n");
                }
                break;
            case 0:
                break;
            default:
                printf("opcja nieznana\n");
                break;
        }

    }while(option != 0);
}