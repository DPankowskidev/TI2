#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

char** line_table = NULL;
char** status = NULL;
int line_index = 0;
int pamiec = 0;

void nPamiec() {
    if (line_index >= pamiec) {
        pamiec = (pamiec == 0) ? 5 : pamiec * 2;
        line_table = (char**)realloc(line_table, sizeof(char*) * pamiec);
        status = (char**)realloc(status, sizeof(char*) * pamiec);
    }
}

int isLineEmpty(void) {
    return (line_index == 0);
}

char* Pop(void) {
    if (!isLineEmpty()) {
        int usun;
        printf("Podaj numer zadania: ");
        scanf("%d", &usun);
        usun = usun - 1;
        if (usun >= 0 && usun < line_index) {
            char* usunZadanie = strdup(line_table[usun]);
            free(line_table[usun]);
            free(status[usun]);
            for (int i = usun; i < line_index - 1; i++) {
                line_table[i] = line_table[i + 1];
                status[i] = status[i + 1];
            }
            line_index--;
            return usunZadanie;
        }
        else {
            printf("Nie znaleziono zadania\n");
        }
    }
    return NULL;
}

char* Kolejka(void) {
    if (!isLineEmpty()) {
        printf("Lista zadan:\n");
        for (int i = 0; i < line_index; i++) {
            printf("%d.    %s    %s\n", i + 1, line_table[i], status[i]);
        }
    }
    return NULL;
}

void zmStatus(void) {
    if (!isLineEmpty()) {
        int nr;
        printf("Podaj numer zadania: ");
        scanf("%d", &nr);
        nr = nr - 1;
        if (nr >= 0 && nr < line_index) {
            if (strcmp(status[nr], "X") == 0) {
                free(status[nr]);
                status[nr] = strdup("✓");
                printf("Zmieniono status zadania na zrobione\n");
            }
            else {
                free(status[nr]);
                status[nr] = strdup("X");
                printf("Zmieniono status zadania na nie zrobione\n");
            }
        }
        else {
            printf("Nie znaleziono zadania\n");
        }
    }
}

void Push(char* val) {
    nPamiec();
    line_table[line_index] = strdup(val);
    status[line_index] = strdup("X");
    line_index++;
}

void zapisz(const char* nazwaPliku) {
    FILE* plik = fopen(nazwaPliku, "w");
    if (!plik) {
        printf("Nie mozna otworzyc pliku do zapisu.\n");
        return;
    }
    for (int i = 0; i < line_index; i++) {
        fprintf(plik, "%s    %s\n", line_table[i], status[i]);
    }
    fclose(plik);
    printf("Lista zadan zostala zapisana\n");
}

void wczytaj(const char* nazwaPliku) {
    FILE* plik = fopen(nazwaPliku, "r");
    if (!plik) {
        printf("Nie mozna otworzyc pliku do odczytu.\n");
        return;
    }
    char linia[128];
    while (fgets(linia, sizeof(linia), plik)) {
        char* sep = strstr(linia, "    ");
        if (!sep) continue;
        *sep = '\0'; //konczy zadanie
        char* tresc = linia;
        char* statusZPliku = sep + 4;//adres statusu
        statusZPliku[strcspn(statusZPliku, "\r\n")] = '\0';//usuwa znak nowej lini
        nPamiec();
        line_table[line_index] = strdup(tresc);
        status[line_index] = strdup(statusZPliku);
        line_index++;
    }
    fclose(plik);
    printf("Wczytano zadania z pliku \"%s\".\n", nazwaPliku);
}

