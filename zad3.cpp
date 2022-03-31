#include <stdio.h>

int main() {
  char a;

  printf("Unesi znak:");
  scanf("%c",&a);

  int x = a & 0b00001000;
  if(x == 8)
    printf("Peti bit znaka je %d", 1 );
  else
    printf("Peti bit znaka je %d", 0 );

  return 0;
}
