#include <stdio.h>
#include <stdlib.h>
#include <cstring>

int main(int argc, char const *argv[]) {
    if (argc == 4) {
        int a = 0;
        int b = 0;
        a = atoi(argv[1]);
        b = atoi(argv[3]);

        if (strcmp(argv[2], "add") == 0) {
            printf("%d + %d = %d\n", a, b, a + b);
            return 0;
        }

        if (strcmp(argv[2], "sub") == 0) {
            printf("%d - %d = %d\n", a, b, a - b);
            return 0;
        }
        if(strcmp(argv[2], "mul") == 0){
            printf("%d * %d = %d\n", a, b, a * b);
            return 0;
        }
        if(strcmp(argv[2], "dev") == 0){
            if(b == 0){
                printf("dzielenie przez 0");
                return 1;
            }
            else {
                printf("%d * %d = %d\n", a, b, a / b);
                return 0;
            }
        }
    }
}
