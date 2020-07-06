#include<stdio.h>
#include<stdbool.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

//利用递归的思想，
void reverse_L(LinkList L){
    if(L->next != NULL)
        reverse_L(L->next);
    if(L->next == NULL)
        printf("%d",L->data);
}