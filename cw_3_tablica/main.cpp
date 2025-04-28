#include <iostream> 
//wykorzystanie wskaznikow przy zamianie zmiennych w funkcji

void menu(){
    printf("1 - wyswietl tablice\n");
    printf("2 - edytuj tablice\n");
    printf("3 - edytuj komorke\n");
    printf("4 - najwieksza wartosc\n");
    printf("5 - najmniejsza wartosc\n");
    printf("6 - wartosc srednia\n");
    printf("0 - zamknij program\n");
    printf("wybierz opcje:\n");
}

void wyswtab(int array[]){
    for(int j = 0; j<10; j++){
        printf("%d - %d\n",j+1, array[j]);
    }
}

void edycja(int array[]){
    for(int j = 0; j<10; j++){
        printf("podaj %d wartosc:\n",j+1);
        scanf("%d",&array[j]);

    }
}

void kom(int array[]){
    int komorka;
    int wartosc;
    printf("ktora komorke chcesz zmienic:\n");
    scanf("%d",&komorka);
    if(komorka > 0){
        if(komorka < 11){
            printf("jaka chcesz wpisac wartosc:\n");
            scanf("%d",&wartosc);
            array[komorka - 1] = wartosc;
            printf("%d - %d\n",komorka - 1,array[komorka - 1]);
        }
        else{
            printf("nieznana komorka\n");
        }
    }
    else{
        printf("nieznana komorka\n");
    }
}

void max(int array[]){
    int memory = array[0];
    for(int j = 0; j<10; j++){
        if (memory < array[j]){
            memory = array[j];
        }
    }
    printf("najwieksza wartosc: %d\n", memory);
}  

void min(int array[]){
    int memory = array[0];
    for(int j = 0; j<10; j++){
        if (memory > array[j]){
            memory = array[j];
        }
    }
    printf("najmniejsza wartosc: %d\n", memory);
}

void srednia(int array[]){
    int suma = 0;
    for(int i = 0; i<10; i++){
        suma = suma + array[i];
    }
    printf("wartosc srednia: %d\n",suma/10);
}

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
        case 0:
            break;
        default:
            printf("opcja nieznana\n");
            break;
        }

    }while(option != 0);
}