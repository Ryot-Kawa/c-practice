#include <iostream>
#include <string>
using namespace std;

int main() {
  string S,T;
  cin >> S >> T;
  int prev_count = 0;
  int next_count = 0;
  int max = S.length() - T.length() + 1;
  for(int i = 0; i < max; i++) {
    for(int j = 0; j < T.length(); j++) {
      if(S[j + i] == T[j]) {
        next_count++;
      }
    }
    if(prev_count < next_count) {
      prev_count = next_count;
    }
    next_count = 0;
  }
  cout << T.length() - prev_count << endl;
}