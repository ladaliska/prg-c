#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int i = 0;
float items[10];

int generate_items(){
    srand(time(NULL));
    for (i = 0; i < (sizeof(items) / 4); i++){
        items[i] = (float)rand()/(float)(RAND_MAX) * 1;
        //printf("%f ", items[i]);
    }
    return 0;
}

int show_items(){
    for (i = 0; i < (sizeof(items) / 4); i++)
    {
        printf ("%f ", items[i]);
    }
    
    return 0;
}

int round_items(){
    printf("\n");
    for (i = 0; i < (sizeof(items) / 4); i++)
    {
        printf("%.1f ", items[i]);
    }
    
    return 0;
}


int main(){
    generate_items(sizeof(items) / 4);
    show_items(sizeof(items) / 4);
    round_items(sizeof(items) / 4);
    return 0;
}