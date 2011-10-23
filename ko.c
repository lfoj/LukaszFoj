#include <stdio.h>
#include <math.h>
int main()
{
double x, y;
printf("podaj liczbe rzeczywista: ");
scanf("%lf", &x);
y=sqrt(x);

printf("pierwiastek kwadratowy z %.14lf to %.14lf\n", x, y);
return 0;
}
