#include <stdio.h>
#include <stdlib.h>

string funkcja(string in, char *napis);

int main() {
  
char *napis = "abcdef";

 printf("in = %s\n", napis);
 funkcja(napis);
 printf("\n");
  return 0;
}
void funkcja(string in) {
  int i, len = StringLength(in);
  

  for (i = len - 1; i >= 0; i--)
    putchar(in[i]);


}
