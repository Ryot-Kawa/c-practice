#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  if (100 > N || 999 < N) {
    cout << "No" << endl;
    // 早期リターンしちゃえば、else使う必要なくなる
    return 0;
  }

  int a = N / 100;
  int c = N % 10;
  if (a == c) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
