#include <stdio.h>

int main()
{
  int a, b, i;   

  printf("Podaj pierwszą liczbę: ");
  scanf("%d", &a);
  printf("Podaj liczbę większą od pierwszej: ");
  scanf("%d", &b);
 b = b-a;
 for(i=1;i<b;i++)
   {
     printf("%d\n", ++a);
 
   }
  return 0;
   }

