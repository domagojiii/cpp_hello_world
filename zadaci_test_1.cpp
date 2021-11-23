#include <iostream>
using namespace std;

int main() {
  unsigned int x[7], a, b;
  for(int i=0; i<7; i++) {
    cin >> x[i];
    if(i == 0) {
      a = x[i];
    }
  }
  for(int i=0; i<7; i++) {
    if(x[i]>a) {
        cout << x[i] << endl;
        b = x[i] - 8;
        while(b > 0) {
          cout << b << " ";
          b = b - 1;
        }
        cout << endl;
    }
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  float x[10];
  for(int i=0; i<10; i++) {
    cin >> x[i];
  }
  for(int i=0; i<10; i++) {
    if(x[i] != int(x[i]) && x[i] - int(x[i]) > 0.5) {
      cout << x[i] << endl;
    }
  }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
  char c;
  do {
    cin >> c;
  } while(c != 'C' && c != 'D' && c!= 'E');
  cout << char((int(c) - 2 + (int('a') - int('A')))) << endl;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int x[5];
  for(int i=0; i<5; i++) {
    cin >> x[i];
  }
  for(int i=1; i<5; i++) {
    if(x[i] > x[4] && x[i]*2 < x[i-1]) {
      cout << x[i] << endl;
    }
  }
  return 0;
}
