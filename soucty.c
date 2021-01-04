#include <stdio.h>
#include <math.h>


int main(){
    int x = 1, y = 1, res;
    while(x <= 20 && y <= 20){
        
        res = x + y;
        printf("%i, ", res);
        y++;
        
    if(y == 21){
    x++;
    y = 1;
    }



    }
    return 0;
}