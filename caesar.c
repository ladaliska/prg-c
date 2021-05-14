#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int caesar_encrypt(char sifra[], int p) {
  int i = 0;

  while (sifra[i] != '\0') {
    if ((sifra[i] + p) >= 65 && (sifra[i] + p) <= 90) {
      sifra[i] += (p);
    }
    else {
      sifra[i] += (p - 25); 
    }
    i++;
  }
  printf("%s", sifra);
  return 0;
}

int main () {
char sifra[100];
int p;

  printf("Zapiste vetu, kterou chcete zakodovat (POUZE VELKA PISMENA): ");
  scanf("%s", sifra);

  printf("O kolik mist? (1-10): ");
  scanf("%d", &p);

  caesar (sifra, p);

  return 0;
}

