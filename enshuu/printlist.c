#include <stdio.h>

int main(){
    struct cell *pc1,*pc2,*pc3;

    pc1 = malloc(sizeof(struct cell));
    pc2 = malloc(sizeof(struct cell));
    pc3 = malloc(sizeof(struct cell));

    pc1->item = 1; pc1->next = pc2;
    pc2->item = 2; pc2->next = pc3;
    pc3->item = 3; pc3->next = NULL;

    printList(pc1);
}