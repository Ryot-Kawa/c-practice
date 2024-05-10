#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  if(100>n || 1000<n){
    printf("No\n");
  }
  else{
    int a = n/100;
    int c = n%10;
    //printf("%d,%d\n",a,c);
    if (a == c){
      printf("Yes\n");
    }
    else{
      printf("No\n");
    }
  }
}