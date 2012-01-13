#include <math.h>
#include <stdio.h>

void pierwiastek(double p);

int main() {

  double a;
  a = 20;
  pierwiastek(a);
  return 0;
}
void pierwiastek(double p) {
  p = p + 1;
  while (p--) {
    printf("%d  %1f\n",(int) p, sqrt(p));
  }
}
