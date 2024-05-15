#include <stdio.h>

int main(){
  int n,k;
  scanf("%d %d",&n,&k);
  int str[n];
  for(int i=0;i<n;i++){
    scanf("%d",&str[i]);
    if(str[i]%k==0){
      printf("%d ",str[i]/k);
    }
  }
}