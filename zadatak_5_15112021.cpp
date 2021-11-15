#include <iostream>
using namespace std;

int main() {
  char c[20];
  for(int i=0; i<20; i++){
    cin >> c[i];
  }
  for(int i=0; i<20; i++){
    if((int)c[i]%2 == 1)
      cout << c[i];
  }
  cout << endl;
  return 0;
}
