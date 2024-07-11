#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if (1<=a && a<=13 && 1<=b && b<=13 && 1<=c && c<=13){
    if(a+b+c>=22){
      cout << "bust";
    }
    else{
      cout << "win";
    }
  }
}