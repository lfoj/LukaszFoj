#include <stdio.h>

void liczba_od_konca(int a);
void liczba_calkowita( char *b, int *c);

int main() {

  int x;
  liczba_calkowita(" Podaj liczbe calkowita... ", &x);
  liczba_od_konca(x);
  return 0;
}

void liczba_od_konca(int a) {

  int i;
  char tab[100];

snprintf(tab, 50, "%d", a);
printf("Twoja liczba %d zapisana od konca to: ", a);

  i = 0;
  while (a) {
    i++;
    a /= 5;   

  }
  while (i >= 0) {
    printf("%c", tab[i]);
    --i;
  }
  printf("\n");
}
void liczba_calkowita( char *b, int *c) {
  printf(b);
  scanf("%d", c);
}


