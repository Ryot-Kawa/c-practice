#include <iostream>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  int n=0;
  // 配る数は b 個未満
  n = b - (a % b);
  cout << n << endl;
}