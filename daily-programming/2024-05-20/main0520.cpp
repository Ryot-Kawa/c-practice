#include <iostream>
using namespace std;
long times(int x,int n){
  long xx=1;
  for(int i=0;i<n;i++){
    xx=xx*x;
  }
  return xx;
}
int main(){
  long n,a,b;
  cin >> n >> a >> b;
  if(1<=n && n<=times(10,18) && 0<=a && 0<=b && a+b<=times(10,18)){
    long ab = a+b;
    
    long di = n/ab;
    long lef = n%ab;
    long sum;
    if(lef<=a){
      sum = di*a + lef;
    }
    else{
      sum = (di+1)*a;
    }
    cout << sum << endl;
  }
}
