#include <stdio.h>

int main(){
  int n,k;
  scanf("%d %d",&n,&k);
  int str[n];
  for(int i=0;i<n;i++){
    scanf("%d",&str[i]);
  }
  int m=0;
  for(int i=0;i<n;i++){
    if(str[i]%k==0){
      m++;
    }
  }
  int ans[m];
  for(int i=0;i<n;i++){
    if(str[i]%k==0){
      ans[i]=str[i]/k;
      printf("%d ",ans[i]);
    }
  }
}