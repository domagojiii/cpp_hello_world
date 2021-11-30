#include <iostream>
using namespace std;

int main() {
  int n, i, z;
  char rijeci[100][100];
  char rijec[100];
  do {
    cout << "unesite broj n:" << endl;
    cin >> n;
  } while(n <= 0);
  cin.ignore();
  for(int j=0; j<n; j++) {
    cout << "unesite rijec:";
    cin.getline(rijeci[j], 100);
    cout << ":" << rijeci[j] << endl;
  }
  do {
    cout << "unesite broj i:" << endl;
    cin >> i;
  } while(i < 1 || i > n);

  for(int j=0; j<n; j++) {
    z = j;
    for(int k=j; k<n; k++) {
      for(int m=0; m<strlen(rijeci[k]) && m<strlen(rijeci[z]); m++) {
        if(rijeci[k][m] < rijeci[z][m]) {
          z = k;
          break;
        } else if(rijeci[k][m] > rijeci[z][m]) {
          break;
        }
      }
    }
    strcpy (rijec,rijeci[z]);
    strcpy (rijeci[z],rijeci[j]);
    strcpy (rijeci[j],rijec);
  }
  cout << "rijec je: " << rijeci[i-1] << endl;
  return 0;
}
