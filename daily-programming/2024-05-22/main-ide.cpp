#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 入力: 分解したい文字列
// 返値: 分割した文字列の配列
vector<string> split_by_same(const string s);


int main() {
  string s;
  cin >> s;
  const auto split = split_by_same(s);
  string ans_s = "";
  for (const string& ele : split) {
    ans_s += ele[0];
    ans_s += to_string(static_cast<int>(ele.size()));
  }
  
  cout << ans_s << endl;
  return 0;
}

vector<string> split_by_same(const string s) {
  // split: 結果格納庫
  vector<string> split;
  // element: splitそれぞれの要素
  string element = "";
  char s_before = s[0];
  const int size = static_cast<int>(s.size());
  for (int i = 0; i < size; i++) {
    if (i == 0) {
      element += s[i];
      continue;
    }
    
    if (s_before != s[i]) {
      split.push_back(element);
      element = "";
      s_before = s[i];
    }
    element += s[i];
  }
  split.push_back(element);
  return split;
}