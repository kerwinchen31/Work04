#include <stdio.h>
#include <string.h>

char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, size_t n);

int main(){
  char uno[100] = "rasca";
  char dos[100] = "cielos";
  printf("string uno: %s\n", uno);
  printf("string dos: %s\n", dos);
  printf("uno + dos: %s\n", strcat(uno, dos));
  printf("string uno: %s\n", uno);
  printf("string dos: %s\n", dos);
  printf("uno + 2 bytes of dos: %s\n", strncat(uno, dos, 2));
  return 0;
}
