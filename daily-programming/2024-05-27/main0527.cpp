#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  int sum = 0;
  int num[N];
  for(int i = 0; i < N; i++) {
    cin >> num[i];
    sum += num[i];
  }
  if(sum%N != 0) {
    cout << -1 << endl;
  }else{
   int div = sum / N;
   int sum2 = 0;
   int count = 1;
   int bridge = 0;
   for(int i = 0; i < N; i++) {
     sum2 += num[i];
     if(sum2 == (count*div)){
       bridge += (count - 1);
       sum2 = 0;
       count = 1;
     }else{
       count++;
     }
   }
   cout << bridge << endl;
  }
}