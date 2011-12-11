#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {
  double x, step = 1.0, r;
  FILE *fout;  

   if (argc != 2) {
    printf("Użycie: %s DEST\n", argv[0]);
    return 3;
  }
  if ((fout = fopen(argv[1], "w")) == NULL) {
    printf("Nie mogę otworzyć pliku do zapisu %s\n", argv[1]);
    return 2;

  }

  printf("Zapisuję dane do pliku: %s\n");
  
x = 0.0;
  while ((fout = fgetc()) != EOF) {
    r = random() / RAND_MAX;
    printf("%.1f %.2f %.3f", x, x*x, r);
    x += step;
  }
     fclose(fout);

  return 0;
}
