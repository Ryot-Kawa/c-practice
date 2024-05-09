#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;

    printf("%p\n",ptr);

    printf("Input an integer:\n");
    ptr = malloc(sizeof(int));
    printf("%p\n",ptr);  
    scanf("%d", ptr);
    printf("%d\n",*ptr);
    free(ptr);
    printf("%d\n",*ptr);
  
    return 0;
}