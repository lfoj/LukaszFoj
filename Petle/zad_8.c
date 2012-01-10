#include <stdio.h>

int wzor( int a, int b);

int main() {
  int a;
int j, i;

  a = 1;
  j = 0;
  while (j < 4) {

    int tab[7] = {a, 8-a, 5-a, (a+1)*2, tab[2], tab[1], a};  
    for (i = 0;i < 7; i++) 
      wzor(tab[i], i);
      printf("\n");
      a++;
      j++;
  
  }
  return 0;
}
  int wzor(a, b)
  {
    int i = 0;

    while(i < a) {
      if (b%2 == 0)
	putchar('*');
      else
	putchar(' ');
      i++;    
}
    return 0;
  }
