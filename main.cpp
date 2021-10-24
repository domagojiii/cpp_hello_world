#include <iostream>
using namespace std;

int main() {
  int a = 179; 
  int b = 123;
  int c;
  cout << a << " " << b << " " << c << "\n";
  if (c == a+b) {
    cout << "tocno\n";
  } else {
  	cout << "netocno\n";
  }
  c = a + b;
  cout << a << " " << b << " " << c << "\n";
  if (c == a+b) {
    cout << "tocno\n";
  } else {
  	cout << "netocno\n";
  }
  return 0;
}
