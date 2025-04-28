#include <iostream>
void male_litery(char*ciag){
    while(*ciag) {
        if ('A' <= *ciag && *ciag <= 'Z') {
            *ciag += ('a' - 'A');
        }
        ciag++;
    }
    //printf("%s z funkcji\n", ciag);
}

void duze_litery(char*ciag){
    while(*ciag) {
        if ('a' <= *ciag && *ciag <= 'b') {
            *ciag -= ('a' - 'A');
        }
        ciag++;
    }
    //printf("%s\n", ciag);
}

int main() {
    char tekst[] = "aA4bB8";
    int rozmiar = sizeof(tekst)-1;
    printf("%s\n", tekst);
    male_litery(tekst);
    printf("%s\n", tekst);
    duze_litery(tekst);
    printf("%s\n", tekst);
    printf("tablica ma %d wartosci + komurke konca\n", rozmiar);

    return 0;
}
