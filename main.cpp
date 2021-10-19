#include <iostream>
using namespace std;

int main() {
  int decilitri = 1798282; 
  int hektolitri, litre;
  hektolitri = decilitri / 1000;
  litre = decilitri / 10;
  std::cout << decilitri << "\n";
  std::cout << hektolitri << " " << litre  << " " << decilitri << "\n";
  return 0;
}
