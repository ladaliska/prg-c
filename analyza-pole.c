#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  int c, n[5], x, d;

  for (c = 0; c <= 4; c++) {
    n[c] = rand() % 100 + 1;
    printf("%d ", n[c]);
  }
    printf("\n");

    if(n[0] < n[1] && n[0] < n[2] && n[0] < n[3] && n[0] < n[4]){
        printf("%i", n[0]);
        x = n[0];
    }
    if(n[1] < n[0] && n[1] < n[2] && n[1] < n[3] && n[1] < n[4]){
        printf("%i", n[1]);
        x = n[1];
    }
    if(n[2] < n[0] && n[2] < n[1] && n[2] < n[3] && n[2] < n[4]){
        printf("%i", n[2]);
        x = n[2];
    }
    if(n[3] < n[0] && n[3] < n[1] && n[3] < n[2] && n[3] < n[4]){
        printf("%i", n[3]);
        x = n[3];
    }
    if(n[4] < n[0] && n[4] < n[1] && n[4] < n[2] && n[4] < n[3]){
        printf("%i", n[4]);
        x = n[4];
    }

    printf("\n");

    if(n[0] > n[1] && n[0] > n[2] && n[0] > n[3] && n[0] > n[4]){
        printf("%i", n[0]);
        d = n[0];
    }
    if(n[1] > n[0] && n[1] > n[2] && n[1] > n[3] && n[1] > n[4]){
        printf("%i", n[1]);
        d = n[1];
    }
    if(n[2] > n[0] && n[2] > n[1] && n[2] > n[3] && n[2] > n[4]){
        printf("%i", n[2]);
        d = n[2];
    }
    if(n[3] > n[0] && n[3] > n[1] && n[3] > n[2] && n[3] > n[4]){
        printf("%i", n[3]);
        d = n[3];
    }
    if(n[4] > n[0] && n[4] > n[1] && n[4] > n[2] && n[4] > n[3]){
        printf("%i", n[4]);
        d = n[4];
    }

    printf("\n");

    int prumer = (n[0] + n[1] + n[2] + n[3] + n[4]) / 5;
    printf("%i\n", prumer);

    int prum = (n[0] + n[1] + n[2] + n[3] + n[4] - x - d) / 3;
    printf("%i", prum);

  return 0;
}