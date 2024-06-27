#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int max = (n / 4) + 1;
  int seven_y;
  int count = 0;
  for(int x = 0; x < max; x++) {
    seven_y = n - 4 * x;
    if(seven_y % 7 == 0) {
      cout << "Yes" << endl;
      return 0;
    } else {
      count++;
    }
  }
  if(count == max) {
    cout << "No" << endl;
  }
}