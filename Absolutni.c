#include <stdio.h>
#include <math.h>


int main(){
    int x = 128, y = -128, res;
    if (x < 0){
        x = x * -1;
    }
        else if(y < 0){
            y = y * -1;
        }

    res = x + y;
    printf("%i", res);


        return 0;
}