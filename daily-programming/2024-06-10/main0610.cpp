#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int n = 0;
  if(a + b == c){
    n++;
  }
  if(a - b == c){
    n = n + 2;
  }
  switch(n) {
    case 0:
    cout << "!" << endl;
    break;
    
    case 1:
    cout << "+" << endl;
    break;
    
    case 2:
    cout << "-" << endl;
    break;
    
    case 3:
    cout << "?" << endl;
    break;
  }
}