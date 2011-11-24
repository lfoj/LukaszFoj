#include <stdio.h>

int main()

{
  int jest_pierwsza,  i, n, x = 0;

  printf("Podaj liczbę całkowitą: ");
  scanf("%d", &n);


  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      x++;
	
    }
}
  if (x == 0 && n !=1) {
    jest_pierwsza = 1;
  }
  else  {
    jest_pierwsza = 0;
  }
  printf("Podana liczba '%d' jest %s\n",
	 n, jest_pierwsza ? "pierwsza" : "złożona");   
 return 0;
}
