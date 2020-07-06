#include<stdio.h>
#include<stdbool.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

LinkList reverse(LinkList L){
    LNode *pre;
    LNode *p = L->next;
    LNode *r = p->next;
    //逆置需要对每个结点单独处理，则需要用*r来保存原来表中p的后继结点
    p->next = NULL; //断开
    while(r != NULL){
      //p不是最后一个结点 则：
      pre = p;
      p = r;
      r  = r->next;
      p->next = pre;  
    }
    //处理最后一个结点
    L->next = p;
    return L;
}