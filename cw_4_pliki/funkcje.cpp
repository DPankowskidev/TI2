//
// Created by Student on 31.03.2025.
//
#include <iostream>

int zapis(int array[]){ //zapisanie czegos w pliku
    FILE *fptr = NULL;
    fptr = fopen("tekst.txt", "w");
    if (fptr == 0){
        //printf("Blad otwarcia pliku\n"); //informacja w pliku glownym
        return 1;
    }
    for(int i = 0; i < 10; i++){
        fprintf(fptr, "%d\n",array[i]);
        //printf("%d\n",array[i]); //tylko zprawdzenie czy sie for odpala
    }
    fclose(fptr);
    return 0;
}

int odczyt(int array[]){ //odczyt czegos z pliku
    FILE *fptr = 0;
    fptr = fopen("tekst.txt", "r");
    if (fptr == 0) {
       // printf("Blad odczytu pliku\n"); //informacja w pliku glownym
        return 1;
    }
    for (int i = 0; i < 10; i++) {
        if (fscanf(fptr, "%d", &array[i]) != 1) {
            fclose(fptr);
            return 2;
        }
    }
    fclose(fptr);
    return 0;
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
            printf("%d - %d\n", komorka, array[komorka - 1]);
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