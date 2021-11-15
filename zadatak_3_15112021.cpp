#include <iostream>
using namespace std;

int main() {
  float x[10];
  for(int i=0; i<10; i++){
    cin >> x[i];
  }
  cout << "decimalni brojevi su:" << endl;
  for(int i=0; i<10; i++){
      if(x[i] - (int)x[i] > 0)
        cout << x[i] << endl;
  }
  return 0;
}
