#include <iostream>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  if( ((a+b)%2)!=0 ){
    cout << "IMPOSSIBLE" << endl;
  }
  else{
    int k = (a+b)/2;
    cout << k << endl;
  }
}