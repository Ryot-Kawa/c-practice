#include <stdio.h>
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  int n=0;
  while(a%b!=0){
    a++;
    n++;
  }
  printf("%d\n",n);
}