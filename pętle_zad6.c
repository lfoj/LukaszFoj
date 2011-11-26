#include <stdio.h>

int main() {
  /* deklarowanie zmiennych */
  int i;
  float tab[6];
  float najmniejsza, najwieksza;
  /* wprowadzanie liczb */
  printf("Wprowadź 6 liczb całkowitych...\n");

  for (i=0; i<=5; ++i)
    {
      scanf("%f", &tab[i]);
    }
  /* wyświetlanie najwiekszej i najmniejszej */
  for (i=0; i<=5; ++i)
    {
      if (tab[i]>najwieksza)
	najwieksza=tab[i];
      if (tab[i]<najmniejsza)
	najmniejsza=tab[i];
    }
  printf("najmniejsza= %.1f, najwieksza= %.1f\n", najmniejsza,najwieksza);
  return 0;
}
