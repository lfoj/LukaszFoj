#include <stdio.h>

int main()
{
  int i, suma = 0, a;
  int zmienna = 0;
  printf("Podaj liczbę do której będziemy sumować: ");
  scanf("%d", &a);
  
  for (i = 1; i<=a; ++i)
    {
      if (a<1) {
        printf("Ta liczba jest nieprawidłowa.\n");
        zmienna = 1;
      }
      else {
        zmienna = 0;
      }
      suma = suma + i;
    }
  printf("%d\n", suma);
  return 0;
}
