#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char vyber;
    int ddva;    
    double deleni, mjedna, mdva, djedna;
    
 while(1){       
    printf("Deleni(d) nebo Mocnina(m)?");   // Při cyklu se to začne ptát 2x... Už nevim co s tím :( . Ale funguje to normálně...
    vyber = getchar(); 
    if(vyber == *"d" || vyber == *"m")
    {
    if(vyber == *"d")
    {   
        
        printf("delenec delitel\n");
        scanf("%lf%d", &djedna, &ddva);
        deleni = djedna / ddva;
        printf("Podil = %lf\n", deleni);
        
    }
    else
    {   
        
        printf("mocnina exponent\n");
        scanf("%lf%lf", &mjedna, &mdva);
        double mocnina = pow(mjedna, mdva);
        printf("vysledek = %.0lf\n", mocnina);
        
    }
    }
 }
    return 0;
    }
