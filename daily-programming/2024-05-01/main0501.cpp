#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int str[4];
  str[0]=n/1000;
  str[1]=(n-str[0]*1000)/100;
  str[2]=(n-str[0]*1000-str[1]*100)/10;
  str[3]=n%10;
  for(int i=0;i<4;i++){
    printf("%d",str[i]);
  }
}