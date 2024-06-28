#include <iostream>
#include <string>
using namespace std;

int check(string s, int i, int c) {
  string sub = s.substr(i,1);
  if(sub == "A" || sub == "C" || sub == "G" || sub == "T") {
    i++;
    c++;
    return check(s, i, c);
  } else {
    return c;   
  }
}

int main() {
  string str;
  cin >> str;
  int count = 0;
  int max= 0;
  for(int i = 0; i < str.size(); i++) {
    count = check(str, i, count);
    if(max < count) {
      max = count;
    }
    count = 0;
  }
  cout << max << endl;
}