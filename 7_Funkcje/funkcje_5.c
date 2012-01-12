#include <stdio.h>

void prostokat( int szerokosc, int wysokosc);
void rysuj(int odstep, int gwiazdka, int przerwa, int gwiazda);

int main() {

  prostokat(7,6);
  return 0;
}

void prostokat(int szerokosc, int wysokosc) {

  rysuj(0,szerokosc,0,0);  
  while (wysokosc--) 
    rysuj(0,1,szerokosc-2,1);
  rysuj(0,szerokosc,0,0);
}
void rysuj(int odstep, int gwiazdka, int przerwa, int gwiazda) {

  while (odstep--)
    printf(" ");
  while (gwiazdka--)
    printf("*");
  while (przerwa--)
    printf(" ");
  while (gwiazda--)
    printf("*");
  printf("\n");
}  
