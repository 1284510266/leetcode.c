#include<stdio.h>
#include<stdbool.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

void del_x_L(LinkList L,int x){
    LNode *p;
    if(L->next == NULL) return false;
    if(L->next == x){
        p = L->next;
        L->next = p->next;
        free(p);
        del_x_L(L,x);
    }else{
        del_x_L(L->next,x);
    }
    return true;
}