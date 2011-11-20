#include <stdio.h>
#include <math.h>

int main()
{
int z = 1, i = 1;
while (z <= 2010)
{
printf("%d\n", z);
z = pow(2, i);
++i;
}
  return 0;
}


