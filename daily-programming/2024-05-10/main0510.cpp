#include <stdio.h>
int main(){
  int H,W,h,w;
  scanf("%d %d\n%d %d",&H,&W,&h,&w);
  int black = h*W + w*(H-h);
  int white = H*W - black;
  printf("%d",white);
}