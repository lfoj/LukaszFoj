#include <stdio.h>

long double silnia(int a);
int liczba_naturalna(char *prompt);
void silnia_liczb_pierwszych(int x);

int main()
{
  int a;
 a = liczba_naturalna("Podaj liczbę naturlną: ");

  silnia_liczb_pierwszych(a);

  return 0;
}

int liczba_naturalna(char *prompt)
{
  int n;
 printf(prompt);
 scanf("%d", &n);

  if (n < 1) {
    while (n < 1) {
printf
  ("Nie da sie policzyc silni\n Podaj liczbe wieksza od 1: \n");
 scanf("%d", &n);
    }
  }
  return n;
}

long double silnia(int a)
{
  int i = a--;

  while (a) {
    i *= a--;
  }

  return i;
}

void silnia_liczb_pierwszych(int x){
  long double z;

  while (x > 0) {

z = silnia(x);
 printf("Silnia z %d to: %Lf\n", x, z);
 x--;
  }
}
