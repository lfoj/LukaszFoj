#include<stdio.h>
int main(int argc, char* argv[])
{
 
 int i,k;
 printf("Ptogram wypisze 8 gwiazdek w 8 szeregach...\n");
  
for (i=1;i<=8;++i)
  {
    if (i%2==0)
    printf(" ");
    for (k=0;k<16;k++){
     if (k%2==0)
       printf(" "); 
else     
printf("*");


    }
    printf("\n");
  }
  printf("\nNacisnij dowolny klawisz aby kontynuowac");
  return 0;
}
