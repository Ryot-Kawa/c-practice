#include <iostream>
#include <vector>
using namespace std;
int c = 0;
int fun(int n) {
  if(n % 2 == 0) {
    return n / 2;
  } else {
    return 3 * n + 1;
  }
}

bool search(int a, vector<int> &vec) {
  for(int i = 0; i < vec.size(); i++) {
    if(a == vec[i]) {
      c++;
    }
  }
  if(c == 1) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int s;
  cin >> s;
  vector<int> vec{s};
  int next = fun(s);
  
  while(search(next, vec) != 1){
    vec.push_back(next);
    next = fun(next);
  }

  cout << vec.size() + 1 << endl;
}