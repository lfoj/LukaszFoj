#include <stdio.h>
#include <math.h>
int main()
{
long double x, y;
printf("podaj liczbe rzeczywista: ");
scanf("%Lf", &x);
if (x<0)
{
printf("nie da sie policzyc pierwiastka z liczby ujemnej");
}
else
{
y=sqrtf(x);

printf("pierwiastek kwadratowy z %Lf to %Lf\n", x, y);
}
return 0;
}
