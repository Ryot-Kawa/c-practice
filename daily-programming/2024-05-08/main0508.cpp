#include <stdio.h>

int main(){
  char c1[3],c2[3],c3[3];
  scanf("%c%c%c\n%c%c%c\n%c%c%c",&c1[0],&c1[1],&c1[2],&c2[0],&c2[1],&c2[2],&c3[0],&c3[1],&c3[2]);
  printf("%c%c%c",c1[0],c2[1],c3[2]);
}