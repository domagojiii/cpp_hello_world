#include <iostream>
using namespace std;

int main() {
  int x = 0;
  while(x<20 || x>30){
    cin >> x;
  }
  if(x == 30){
    cout << "trideset " << endl;
  }else{
    cout << "dvadeset";
    switch(x%10){
      case 0:
        cout << endl;
        break;
      case 1:
        cout << "jedan" << endl;
        break;
      case 2:
        cout << "dva" << endl;
        break;
      case 3:
        cout << "tri" << endl;
        break;
      case 4:
        cout << "cetiri" << endl;
        break;
      case 5:
        cout << "pet" << endl;
        break;
      case 6:
        cout << "sest" << endl;
        break;
      case 7:
        cout << "sedam" << endl;
        break;
      case 8:
        cout << "osam" << endl;
        break;
      case 9:
        cout << "devet" << endl;
        break;
    }
  }
  return 0;
}
