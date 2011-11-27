#include <stdio.h>

int main()
{
  /*Deklarowanie zmiennych*/
    int i, tab[6];
    /*Wprowadzanie liczb*/
    printf("Wprowadz 6 liczb calkowitych:\n ");
    for (i=0; i<=5; ++i) {
scanf("%d", &tab[i]);
    }

    /* Wypisywanie liczb od początku i od konca*/
    printf("Wprowadzone liczby wypisane od początku: \n");   
 for(i=0;i<=5;++i) {
      printf("%d\n", tab[i]);
    }
 printf("Wprowadzone liczby wypisane od końca: \n");   
 for(i=5;i>=0;--i) {

printf("%d\n", tab[i]);
    }
   
    return 0;
}
