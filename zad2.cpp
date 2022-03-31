#include <stdio.h>

int main() {
  char a;

  scanf("%c",&a);

  switch(a) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("DA\n");
      break;
    default:
      printf("NE\n");
  }
  return 0;
}
