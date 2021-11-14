#include <iostream>
using namespace std;

int main() {
  char s1[1000];
  char s2[1000];
  cin.getline(s1, 1000);
  cin.getline(s2, 1000);
  int rezultat = 0;
  int i1 = strlen(s1);
  int i2 = strlen(s2);
  char c = ' ';
  for(int i=0; i<i1; i++) {
    for(int j=0; j<i2; j++) {
      if(s1[i] == s2[j]) {
        rezultat++;
      }
    }
  }
  cout << rezultat << endl;
  return 0;
}
