#include <stdio.h>

/* program numer 1 z zadań Rekurencji*/

int cnk(int n, int k);

int main() {
  int k, n;
  printf("Wprowadź n... ");
  scanf("%d", &n); 
 printf("Wprowadź k... ");
  scanf("%d", &k);
  printf("Wynik potęgowania n^k to: %d\n", cnk(n, k));
 
  return 0;
}

int cnk(int n, int k) {
  if ( k >= 1 ){ 
    return cnk(n, k-1)*n; }
  if (k <= -1){
    return cnk(n, k+1)/n;} 
  return 1;

}



