#include <iostream>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  int n=0;
  while(a%b!=0){
    a++;
    n++;
  }
  cout << n << endl;
}