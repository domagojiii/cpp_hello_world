#include <iostream>
using namespace std;

int main() {
  int b[1000];
  int n, x;
  bool dodan;
  do {
    cout << "unesite broj n:" << endl;
    cin >> n;
  } while(n <= 0 || n > 1000);

  for(int j=0; j<n; j++) {
    cout << "unesite broj:";
    cin >> x;
    dodan = false;
    for(int k=0; k<j; k++) {
      //cout << x << endl;
      //cout << b[k] << endl;
      if(x <= b[k]) {
        cout << "blabla" << endl;
        for(int l=j; l>k; l--) {
          b[l] = b[l-1];
        }
        b[k] = x;
        k = j;
        dodan = true;
      }
    }
    if(!dodan) {
      b[j] = x;
    }
  }

  for(int j=0; j<n; j++) {
    cout << b[j] << endl;
  }
}