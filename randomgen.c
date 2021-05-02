#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main () {
   int i, x[10];
   srand(time(NULL));
   for (i = 0; i < 10; i++){
        x[i] = rand() % 10;
        printf("%d ", x[i]);
    }
   return(0);
}