#include <iostream>
#include <cstdio>
using namespace std;

int polje[1000];
bool prosti[1000];
int MAX_INT = 1000;

void eratostenovo_sito(int i, int j) {
  bool prost[MAX_INT];
  for(int i=0; i<MAX_INT; i++) {
    prost[i] = true;
  }
  for(int x = i; x < j; x++) {
    for (int p = 2; p * p <= polje[x]; p++) {
      if (prost[p] == true) {
        for (int i = p * p; i <= polje[x]; i += p) {
          prost[i] = false;
        }
      }
    }
    if(prost[polje[x]]) {
      prosti[x] = true;
    }
  }
}

int main() {
  for(int i=0; i<200; i++) {
    polje[i] = i;
    prosti[i] = false;
  }

  eratostenovo_sito('a', 'z'+1);
  for(int i='a'; i<='z'; i++) {
    if(prosti[i] == false) {
      cout << char(polje[i]) << endl;
    }
  }
}