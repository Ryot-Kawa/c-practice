#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int l[n];
  int max = 0, others = 0;
  for(int i = 0; i < n; i++) {
    cin >> l[i];
    if(l[i] > max) {
      others += max;
      max = l[i];
    } else {
      others += l[i];
    }
  }
  if(max < others) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
}