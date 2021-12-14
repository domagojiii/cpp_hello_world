#include <iostream>
using namespace std;

char rijeci[100][100];

void sort_mjehuricasti(int n) {
  bool zamjeni = false;
  char rijec[100];
  for(int i=0; i<n; i++) {
    for(int j=0; j<n-1; j++) {
      for(int m=0; m<strlen(rijeci[j]) && m<strlen(rijeci[j+1]); m++) {
        if(rijeci[j][m] > rijeci[j+1][m]) {
          zamjeni = true;
          break;
        } else if(rijeci[j][m] < rijeci[j+1][m]) {
          break;
        }
      }
      if(zamjeni) {
        strcpy (rijec,rijeci[j+1]);
        strcpy (rijeci[j+1],rijeci[j]);
        strcpy (rijeci[j],rijec);
      }
      zamjeni = false;
    }
  }
}

int main() {
  int n;
  do {
    cout << "unesite broj n:" << endl;
    cin >> n;
  } while(n <= 0);
  cin.ignore();
  for(int j=0; j<n; j++) {
    cout << "unesite rijec:";
    cin.getline(rijeci[j], 100);
    //cout << ":" << rijeci[j] << endl;
  }
  sort_mjehuricasti(n);
  for(int j=0; j<n; j++) {
    cout << rijeci[j] << endl;
  }
  return 0;
}
