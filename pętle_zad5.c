#include <stdio.h>

int main() {
  /* deklarowanie zmiennych */ 
 int i;
  int tab[6];
  /* wprowadzanie liczb */ 
 printf("Wprowadź 6 liczb całkowitych...\n");

 for (i=0; i<=5; ++i)
   {
     scanf("%d", &tab[i]);
   }
 /* wyświetlanie liczb */
 printf("Wprowadzone liczby od początku: \n");
 for (i=0; i<=5; ++i)
   {
     printf("%d\n", tab[i]);
   }
 printf("Wprowadzone liczby od końca: \n");

 for (i=5; i>=0; --i)
   {
     printf("%d\n", tab[i]);
   }
 return 0;
}
