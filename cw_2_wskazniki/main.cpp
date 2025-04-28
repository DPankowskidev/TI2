#include <iostream>


    /*
    //wyswietlanie tabeli
    int main() {
    int numbers[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i=0; i<10; i++){
        printf("[%d] = %d\n", i, *(numbers + i));
    }
    return 0;
}
    */

    /*
    //wpisywanie danych
    int main() {
    int numbers[10];

    for(int i=0; i<10; i++){
        printf("podaj %d wartosc:\n", i);
        scanf("%d", &*(numbers + i) );
    }

    for(int i=0; i<10; i++){
        printf("[%d] = %d\n", i, *(numbers + i));
    }
    return 0;
}
    */

/*
    // chyba dzialajace const
    int main() {
    int numbers[10];
    const int *ptr = numbers;

    for(int i=0; i<10; i++){
        printf("podaj %d wartosc:\n", i);
        scanf("%d", ptr + i );
    }

    for(int i=0; i<10; i++){
        printf("[%d] = %d\n", i, *(ptr + i));
    }
    return 0;
}
*/


//niedzialajace funkcje


void elements(int adres[]){
    for(int i=0; i<10; i++){
        printf("podaj wartosc komorki [%d]:\n", i);
        scanf("%d", adres + i);
    }
    
}

void tab(const int *adr){
    for(int i=0; i<10; i++){
        printf("[%d] = %d\n", i, *(adr + i));
    }
    
}

int numbers[10];
//const int *ptr = numbers;
int *ptr = numbers;  //invalid conversion from ‘const int*’ to ‘int*’ cokolwiek to znaczy

int main() {


elements(ptr);

tab(ptr);






return 0;
}
