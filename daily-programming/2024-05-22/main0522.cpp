#include <iostream>
#include <string>
using namespace std;

int main(){
  string str;
  string strnew = "";
  int count;
  cin >> str;
  count = 1;
  for(int i=0;i<str.length();i++){
    if(str[i]==str[i+1]){
      count++;
    }
    else{
      strnew.insert(strnew.length(),std::string({str[i]}));
      strnew.insert(strnew.length(),std::to_string(count));
      count = 1;
    }
  }
  cout << strnew << endl;
}
