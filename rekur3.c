#include <stdio.h>
#include <strlib.h>

void reverse(string in);

int main() {
  
char *napis = "abcdef";

 printf("in = %s\n", napis);
 reverse(napis);
 printf("\n");
  return 0;
}
void reverse(string in) {
  int i, len = StringLength(in);
  

  for (i = len - 1; i >= 0; i--)
    putchar(in[i]);


}
