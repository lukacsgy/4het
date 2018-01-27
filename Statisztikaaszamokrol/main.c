#include <stdio.h>
#include <stdlib.h>

int main(void){
    int szam, i, darab[10] = {0};

    printf("Add meg a szamokat 1-10 között (kilépés bármilyen nem szam): ");

    while(scanf("%d", &szam) == 1){
        if (szam > 0 && szam < 11){
            darab[szam - 1]++;
        }
    }

    for (i = 1; i <= 10; i++){
        printf("%2d: %d db\n", i, darab[i - 1]);
    }
    return 0;
}
