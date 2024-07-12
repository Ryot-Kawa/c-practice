#include <iostream>
using namespace std;

int main() {
  int in[26];
  char out[26];
  for(int i = 0; i < 26; i++) {
    cin >> in[i];
    out[i] = 'a' - 1;
    out[i] += in[i];
    cout << out[i];
  }
}