#include <stdio.h>

int x, silnia = 1;

int main()
{
   printf("Podaj x: ");
   scanf("%d", &x);
   
   int i;
   for (i = 2; i <= x; ++i)
       silnia *= i;
   
   printf("%d! = %d\n", x, silnia);
   return 0;
}
