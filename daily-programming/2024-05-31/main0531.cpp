#include <iostream>
using namespace std;

int main() {
  long a,b,x;
  cin >> a >> b >> x;
  long ax,bx;
  ax = a/x;
  bx = b/x;
  if(a%x == 0){
    cout << bx - ax + 1 << endl;
  } else{
    cout << bx - ax << endl;
  }
}