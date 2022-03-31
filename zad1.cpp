#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  float ar_sredina;
  float a1, b1, c1;

  printf("Prvi cijeli broj:");
  scanf("%d",&a);
  printf("Drugi cijeli broj:");
  scanf("%d",&b);
  printf("Treci cijeli broj:");
  scanf("%d",&c);
  ar_sredina = ((float)(a+b+c))/3;
  printf("Aritmeticka sredina iznosi:%f",ar_sredina);

  if(ar_sredina-a > 0) {
    a1=ar_sredina-a;
  }else{
    a1=a-ar_sredina;
  }
  if(ar_sredina-b > 0) {
    b1=ar_sredina-b;
  }else{
    b1=b-ar_sredina;
  }
  if(ar_sredina-c > 0) {
    c1=ar_sredina-c;
  }else{
    c1=c-ar_sredina;
  }
  printf("%d je od sritmeticke sredine udaljen :%f\n",a,a1);
  printf("%d je od sritmeticke sredine udaljen :%f\n",b,b1);
  printf("%d je od sritmeticke sredine udaljen :%f\n",c,c1);
  printf("Ukupni produkt je :%f\n",a1*b1*c1);
  return 0;
}
