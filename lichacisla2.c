#include <stdio.h>


int main(){
    int x = 1;
    printf(" %i\n", x);
while(x < 99){
    x++;
    x++;
    if(x < 10){
    printf(" %i\n", x);
    }
    else
    {
      printf("%i\n", x);  
    }
    
}

    return 0;
}