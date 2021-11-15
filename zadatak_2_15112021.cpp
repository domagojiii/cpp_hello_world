#include <iostream>
using namespace std;

int main() {
  char c[5];
  for(int i=0; i<5; i++){
    cin >> c[i];
  }
  for(int i=0; i<5; i++){
      if((int)c[i] < 118)
      cout << c[i];
  }
  cout << endl;
  return 0;
}
