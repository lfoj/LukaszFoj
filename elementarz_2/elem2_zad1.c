#include <stdio.h>
int main() {
  int M, suma = 0, i = 0;
  printf("Podaj liczbe M: ");
  scanf("%d", &M);
    while (suma < M) {
         
      suma = suma+(++i);
   

 }
  printf("Szukane n to: %d ", i);
  return 0;
}
