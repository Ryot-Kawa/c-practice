#include <stdio.h>
int main(){
  int a,b,c;
  scanf("%d %d %d", &a,&b,&c);
  if(a==b){
    printf("%d", c);
  }
  else if(b==c){
    printf("%d", a);
  }
  else if(c==a){
    printf("%d", b);
  }
  else{
    printf("%d", 0);
  }
}