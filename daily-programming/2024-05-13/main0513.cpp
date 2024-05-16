#include <iostream>
using namespace std;
int main(){
  int N;
  cin >> N;
  for(int i=0;i<N;i++){
    int n;
    cin >> n;
    if(n%2==0){
      cout << n << " ";
    }
  }
}