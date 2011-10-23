#include <stdio.h>
#include <math.h>
int main()
{
long double x, y, t;
printf("podaj liczbe rzeczywista: ");
scanf("%Lf", &x);
if (x<=0)
{
printf("nie da sie policzyc pierwiastka z liczby ujemnej\n");
printf("nie można liczyć odwrotności z liczby 0, ani liczby ujemnej\n");
}
else
{
y=sqrtf(x);
t=1/x; 
printf("pierwiastek kwadratowy z %Lf to %Lf\n", x, y);
printf("\nodwrotność liczby %Lf to %Lf\n", x, t); 
}
return 0;
}
