#include <iostream>
using namespace std;

int main() {
  int n, x, max, max2;
  cin >> n;
  // prvi broj je automatski max
  cin >> x;
  max = x;
  // drugi broj
  cin >> x;
  if(x>max){
    max2 = max;
    max = x;
  }else{
    max2 = x;
  }
  for(int i=2; i<n; i++){
    cin >> x;
    if(x>max){
      max2 = max;
      max = x;
    }
    if(x<max && x>max2){
      max2 =x;
    }
  }
  cout << "drugi najveci je " << max2;
  return 0;
}
