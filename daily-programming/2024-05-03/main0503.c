#include <stdio.h>
int main(){
  int x,y;
  scanf("%d %d",&x,&y);
  int z=0;
  int n=x+y+z;
  while(n%3!=0){
    n++;
    z++;
  }
  printf("%d\n",z);
}