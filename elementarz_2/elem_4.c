#include <stdio.h>

int main(int argc, char *argv[]) {
  int c;
  int nb = 0; /* liczba znaków odstępu */
  int nt = 0; /* liczba znaków tabulacji */
  int nl = 0; /* liczba znaków nowego wiersz*/

  printf("Wpisz tekst. I zakończ wciskając: 'ctrl+d'.\n\n");
   while ((c = getchar()) != EOF) {
     if ( c == ' ')
nb++;
if ( c == '\n' )
nl++;
if ( c == '\t' )
nt++;
   }
    
   printf("\n liczba znaków odstępu = %d,\n tabulacji = %d,\n nowego wiersza = %d \n", nb, nt, nl );
   return 0;
 
}
