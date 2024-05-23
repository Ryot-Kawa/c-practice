#include <iostream>
using namespace std;

long times(long x, int n){
  long xx =1;
  for(int i=0;i<n;i++){
    xx=xx*x;
  }
  return xx;
}

int main(){
  long N,D;
  cin >> N >> D;
  int n=0;
  if(1<=N && N<=2*times(10,5) && 0<=D && D<=2*times(10,5)){
    long x[N],y[N],d;
    long z[N];
    for(int i=0;i<N;i++){
      cin >> x[i] >> y[i];
      if(-D<=x[i] && x[i]<=D && -D<=y[i] && y[i]<=D){
        d = times(x[i],2) + times(y[i],2);
        if(d<=times(D,2)){
          n++;
        }
      }
    }
    cout << n << endl;
  }
}