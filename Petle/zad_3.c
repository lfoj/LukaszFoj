                                                                                                        
#include <stdio.h>

int main()
{
  int x, y, i;

  printf("Podaj pierwszą liczbę: ");
  scanf("%d", &x);
  printf("Podaj liczbę większą od pierwszej: ");
  scanf("%d", &y);
  printf( "\n");
   y = y - x;
   i = 1;  
 while (i < y)
   {
     printf("%d", ++x);
     printf("\n");   
     i++;   
}
 return 0;
}
