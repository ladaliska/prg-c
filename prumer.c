#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(){
    float vysledek, tmp = 0;
    int i, pole[10];
    srand(time(NULL));

    for (i = 0; i < 10; i++){
        pole[i] = rand() % 10;
        printf ("%d ", pole[i]);
    }

    for (i = 0; i < 10; i++)
    {
        tmp = tmp + pole[i];
        //printf("\n%d", tmp);
    }
    
    vysledek = tmp / i;
    printf("\n%.2f", vysledek);
    return 0;
}