#include<stdio.h>
#include<stdbool.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;
//不带头节点,初始化时注意一下


bool del_x(LinkList L,int x ){
    LNode *p;
    //三种情况  1，空表 ，return false 2，等于x，删除结点同时 del_x(L,x)3,不等于 del_x(L->next,x)
    if(L == NULL) return false;
    if(L->data == x){
        p = L; //指针p指向待删除结点
        L = L->next; //后继结点前移
        free(p);
        del_x(L,x);
    }else
    {
        del_x(L->next,x);
    }
    return true;
}