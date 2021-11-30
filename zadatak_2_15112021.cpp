#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  char b[100][10];
  int n, x, f, f2, fx, z;
  char bb[10];
  do {
    cout << "unesite broj n:" << endl;
    cin >> n;
  } while(n <= 0);

  f = 1;
  f2 = 1;
  for(int j=0; j<n; j++) {
    sprintf(b[j], "%d", f);
    fx = f2;
    f2 = f + f2;
    f = fx;
    //itoa(x,b[j],10);
  }

for(int j=0; j<n; j++) {
    z = j;
    for(int k=j; k<n; k++) {
      for(int m=0; m<strlen(b[k]) && m<strlen(b[z]); m++) {
        if(b[k][m] < b[z][m]) {
          z = k;
          break;
        } else if(b[k][m] > b[z][m]) {
          break;
        }
      }
    }
    cout << b[z] << endl;
    cout << b[j] << endl;
    strcpy (bb,b[z]);
    strcpy (b[z],b[j]);
    strcpy (b[j],bb);
    cout << b[z] << endl;
    cout << b[j] << endl;
  }

  for(int j=0; j<n; j++) {
    cout << b[j] << endl;
  }
}