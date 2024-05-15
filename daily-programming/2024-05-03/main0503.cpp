#include <iostream>
using namespace std;
int main(){
  int x,y;
  cin >> x >> y;
  int z = 0;
  int n = x+y+z;
  while(n%3!=0){
    n++;
    z++;
  }
  cout << z << endl;
}