#include <stdio.h>

int podzielniki(int a);

void ld(int x);

int main() {
  ld(1000);
  return 0;
}

int podzielniki(int a) {
  int i = 2, b = 1;

  while (i < a) {
    if (a % i == 0)
      b = b + i;
    i++;
  }
  return b;
}

void ld(int x) {
  int n;

  n = 2;
  while (n <= x) { 
    if (podzielniki(n) == n)
      printf("%d \n", n);
    n++; 
  }
}
