#include <iostream>

// int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int number = 0;
int max = 0;
int suma = 0;
int memory = 0;
int min;
int wiersze;

/*void printElement(int num[]){
    for(int i=0; i<sizeof(numbers); i++){
        printf ("%d - %d\n",i,num[i]);
    }
}*/

int main() {

   // printf("Podaj rozmiar tablicy:\n");
   // scanf ("%d",&wiersze);
    int numbers[10];
    printf ("%d\n",sizeof(numbers)); //podaje bajty więc /4
    for(int i=0; i<sizeof(numbers); i++){
        printf ("Podaj wartosc %d komurki\n",i+1);
        scanf("%d",&numbers[i]);
        }

    for(int i=0; i<sizeof(numbers); i++){
        printf ("%d - %d\n",i,numbers[i]);
    }

   // printElement(numbers[]);
    //maksymalna
    for(int i=0; i<sizeof(numbers); i++){
        if(max < numbers[i]){
            max =  numbers[i];
        }
    }
    printf("wartosc maksymalna: %d\n",max);

    //minimalna
    min = numbers[0];
    for(int i=0; i<sizeof(numbers); i++){
        if(min > numbers[i]){
            min =  numbers[i];
        }
    }
    printf("wartosc minimalna: %d\n",min);

    //srednia
    for(int i=0; i<sizeof(numbers); i++){
        suma = suma + numbers[i];
    }
    printf("wartosc srednia: %d\n",suma/sizeof(numbers));
    //mediana   for - sortowanie bombelkowe

    if(sizeof(numbers)%2 == 0) { //parzyste
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10 - i; j++) {
                if (numbers[j] > numbers[j + 1]) {
                    memory = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = memory;
                }
            }
        }
        memory = (numbers[sizeof(numbers) / 2 - 0, 5] + numbers[sizeof(numbers) / 2 + 0, 5]) / 2;
        printf("mediana: %d\n", memory);
    }
    //nie parzyste
    else{
        for (int i = 0; i < sizeof(numbers); i++) {
            for (int j = 0; j < sizeof(numbers) - i; j++) {
                if (numbers[j] > numbers[j + 1]) {
                    memory = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = memory;
                }
            }
        }
        printf("mediana: %d\n", numbers[sizeof(numbers)/2]);
    }

return 0;
}