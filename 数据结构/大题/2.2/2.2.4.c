#include<stdio.h>
#include<stdbool.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

//找到并删除最小值结点

LinkList del_min(LinkList L){
//题解是用四个指针 ，感觉理解起来有点复杂
    LNode *pre = L,*p = pre->next;
    LNode *min_pre = pre,*min_p = p;
    //p为扫描指针 min_p标记最小结点
    while(p != NULL){
    if(p->data < min_p->data){
        min_p = p;
        min_pre = pre; 
    }
    //继续扫描下一个结点
    pre = p;
    p = p->next;
    }
    min_pre->next = min_p->next;//删除最小结点
    free(min_p);
    return L;
}