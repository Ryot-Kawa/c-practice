#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n], b[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> b[i];
  }
  int A = 0;
  int B = 1000;
  for(int i = 0; i< n; i++) {
    if(a[i] > A) {
      A = a[i];
    }
    if(b[i] < B) {
      B = b[i];
    }
  }
  if(A > B) {
    cout << 0 << endl;
  } else {
    cout << B - A + 1 << endl;
  }
}