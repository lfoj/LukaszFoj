#include <stdio.h>
int main()
{
int x, y, t, a, b;
printf("podaj 3  liczby rzeczywiste: ");
scanf("%d", &x);
scanf("%d", &y);
scanf("%d", &t);
a=x+y+t;
b=x*y*t; 
printf("Suma wynosi: %d\n", a=x+y+t);
printf("Iloczyn wynosi: %d\n", b=x*y*t);

if (x>y)
{
if (x>t)
{
printf("Największa liczba to: %d\n", x);
}
else
{
printf("Największa liczba to: %d\n", t);
}
}
else
{
if (y>t)
{
printf("Największa liczba to: %d\n", y);
}
else
{
printf("Największa liczba to: %d\n", t);
}
}
if (x<y)
{
if (x<t)
{
printf("Najmniejsza liczba to: %d\n", x);
}
else    
{
printf("Najmniejsza liczba to: %d\n", t);
}
}
else
{
if (y<t)
{
printf("Najmniejsza liczba to: %d\n", y);
}
else
{
printf("Najmniejsza liczba to: %d\n", t);
}
}
return 0;
}

