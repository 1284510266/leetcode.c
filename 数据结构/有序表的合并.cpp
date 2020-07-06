typedef struct tagLNode  //node表示链表中的结点
{
    int data; //链表的数据域
    struct tagLNode *next; //指针域，由于是后继结点 所以类型为结点类型
}LNode,*LinkList;//一般*LinkList指向头节点 LNode指向普通结点


void MergeList_L(LinkList &LA,LinkList &LB,LinkList &LC){
    //初始化
    int *pa,*pb,*pc;

    pa = LA->next;
}