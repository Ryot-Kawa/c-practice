#include <iostream>
#include <string>
using namespace std;
int main()
{
  // あえて N を string型 で受け取る
  string N;
  string ans = "";
  cin >> N;
  int len = N.length();
  for (int i = 0; i < 4 - len; i++)
  {
      ans += '0';
  }
  ans += N;
  cout << ans << endl;
}
