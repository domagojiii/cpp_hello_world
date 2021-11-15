#include <iostream>
using namespace std;

int main() {
  float x, min = 1, max = 0;
  for(int i=0; i<5; i++){
    cin >> x;
    float d = x - (int)x;
    if(d > max)
      max = d;
    if(d<min)
      min = d;
  }
  cout << "min = " << min << " max = " << max << endl;
  return 0;
}
