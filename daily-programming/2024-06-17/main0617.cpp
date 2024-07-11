#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int num[n];
  int keep;
  int a = 0;
  int b = 0;
  for(int i = 0; i < n; i++) {
    cin >> num[i];
    for(int j = 0; j < i; j++) {
      if(num[i] > num[j]) {
        keep = num[j];
        num[j] = num[i];
        num[i]= keep;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    if(i % 2 == 0) {
      a += num[i];
    } else {
      b += num[i];
    }
  }
  cout << a - b << endl;
}
