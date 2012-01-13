#include <stdio.h>

int main() {
 
  int i, min, index;
  int tab1[4] = {4, 6, 1, 5};
  int *pa[4];

  for(i = 0; i < 4; i++) {

  printf("%d ", tab1[i]);

  }
 
 printf("\n"); 

 index = 0;
 min = tab1[index];
for(i = 1; i < 4; i++) {
  if (tab1[i] < min) {
    index = i; 
   min = tab1[index];
  }
  }
/* pa[0] = tab1 + index; 
printf("min = %d dla i = %d\n", min, index);
printf("*pa[0] = %d\n", pa[0]);*/
 
 pa[0] = tab1 + 2;
 pa[1] = tab1 + 0;
 pa[2] = tab1 + 3;
 pa[3] = tab1 + 1;

for(i = 0; i < 4; i++) {
  printf("%d ", *pa[i]);
 }
 printf("\n");
return 0;

}
