#include <iostream>
using namespace std;

int main() {
  int x[10];
  for(int i=0; i<10; i++){
    cin >> x[i];
  }
  for(int i=0; i<9; i++){
    if(x[i] >= x[i+1]*2)
      cout << x[i] << ", ";
  }
  if(x[9] >= x[0]*2)
      cout << x[9] << ", ";
  cout << endl;
  return 0;
}
