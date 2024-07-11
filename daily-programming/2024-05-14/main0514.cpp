#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  string con = "AGC";
  if(n<10){
    con += '0';
  }
  else if(n<55 && n>41){
    n++;
  }
  string num = std::to_string(n);
  con += '0';
  con += num;
  cout << con << endl;
}