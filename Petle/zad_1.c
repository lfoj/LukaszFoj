#include <stdio.h>
#include "math.h"

int main(){
   
int a, i;
 a = 1;
  a = pow(2, 0);
  i = 1;
for (i = 1; a <= 2010; i++)
    {
      printf("2^%d = %d", i, a);
      printf("\n");
      a = pow(2, i);
  
    }
  return 0;
}
