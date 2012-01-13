#include <stdio.h>

int main() {

  int i;
  int count;
  float tab[6];

  printf("Podaj 6 liczb... ");

  i = 0;
  while  (i < 6) {
    scanf("%f", &tab[i]);
    i++;
  }

  count = 0;
  i = 0;
  while (i < 6) {
    if ((int) tab[i] == tab[i])
      count++;
    i++;
  }
  printf(" Ilosc liczb dodatnich zawartych w tablicy to: %d", count);
  printf("\n");
  return 0;
}
