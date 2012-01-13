#include <stdio.h>

int main()
{

 
  int c;
  int nb, nt, nl;
 
  nb = 0; /* liczba znaków odstępu */
  nt = 0; /* liczba znaków tabulacji */
  nl = 0; /*liczba znaków nowego wiersza*/

 while ((c=getchar()) != EOF) {
if (c == ' ')
++nb;
else 
if (c == '\t')
++nt;
else
if (c == '\n')
++nl;
 }
printf("liczba znaków odstepu: %d\n tabulacji: %d\n nowego wiersza:  %d\n", nb, nt, nl);
return 0;
}
