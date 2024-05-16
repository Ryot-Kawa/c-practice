#include <iostream>
using namespace std;
int main(){
  int n,k;
  cin >> n >> k;
if (0<n && n<=100 && 0<k && k<=100){
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        if((a[i]%k)==0){
        cout << a[i]/k << " ";
        }
    }
    cout << endl;
  }
}