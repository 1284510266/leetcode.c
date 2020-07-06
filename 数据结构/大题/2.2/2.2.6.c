#include<stdio.h>
#include<stdbool.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

void sort(LinkList L){
    LNode *p = L->next,*pre;
    LNode *r = p->next; //r的作用是保持链的连续性
    p->next = NULL;
    p = r;

    while(p != NULL){
        
    }
}