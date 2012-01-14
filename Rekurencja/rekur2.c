#include <stdio.h>

/* program numer 2 z zadań Rekurencji*/

int cnk(int n, int k);

int main() {

  printf("C(%d, %d) = %d\n", 3, 1, cnk(3, 1));
  printf("C(%d, %d) = %d\n", 4, 2, cnk(4, 2));
  printf("C(%d, %d) = %d\n", 3, 3, cnk(3, 3));
  return 0;
}

int cnk(int n, int k) {
  if ( k == n ) {
    return 1;
    if (k == 0)
      return 1; }

  else if (( 0 < k ) && (k < n)) {
    return cnk(n-k, k-1) + cnk(n-1, k);
  }
  else {
    return -1;
  } }

