/* Program ten wypisuje liczby z tablicy tabela[]
   w odwrotnej kolejności: 12, 6, 4, 2, 1 */
#include <stdio.h>
int main() {
  int i, tabela[] = {1, 2, 4, 6, 12};
  for(i=4; i> -1; i--)
    {
      printf("%d ,", tabela[i]);
    }
  printf("\n");   
return 0;
}
