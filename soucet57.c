#include <stdio.h>
#include <math.h>


int main(){
    int x = 5, y = 7, res;
    while(x <=100 && y <= 98){
        res = x + y;
        printf("%i, ", res);
        y = y + 7;
        if(y == 105){
            x = x + 5;
            y = 7;

        }
    }
            return 0;
}