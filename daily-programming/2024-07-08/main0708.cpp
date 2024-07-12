#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int max1 = 0, max2 = 0;
  int keep;
  for(int i = 0; i < n; i++) {
    if(a[i] > max2) {
      if(a[i] > max1) {
        max1 = a[i];
        keep = i;
      } else {
        max2 = a[i];
      }
    }
  }

  for(int i = 0; i < n; i++) {
    if(i == keep) {
      cout << max2 << endl;
    } else {
      cout << max1 << endl;
    }
  }
}