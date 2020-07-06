#include<stdio.h>
#include<stdbool.h>
typedef struct LNode{ //单链表结点的类型
    int data;           //数据域
    struct LNode *next;  //指向下一个结点的指针
}LNode,*Linklist;
//带头节点的单链表的好处之一就是无论单链表是否为空，头指针的指针域不空，总是指向链表的第一个结点（带头结点的链表的第一个结点是头节点）

//头插法
Linklist List_Head(Linklist L){
    //首先初始化
    LNode *s; //指针
    int x;  //数据
    L=(Linklist)malloc(sizeof(LNode));  //创建一个头结点
    L->next = NULL;
    //输入值
    scanf("%d",&x);
    while(x != 9999){
        //9999只是一个假设容量
        s = (LNode*)malloc(sizeof(LNode));  //创建一个结点
        s->data = x;
        L->next = s;
        scanf("%d",&x);
    }
    return L;
}

Linklist List_Tail(Linklist L){
    LNode *s,*r = L;//r为表尾指针;
    int x;
    L = (Linklist)malloc(sizeof(LNode));
    L->next = NULL;

    scanf("%d",&x);
    while(x != 9999){
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        r->next = s; //插入末尾
        r = s;  //上一个操作把s放到了表尾，r=s则重新把r放到表尾
        scanf("%d",&x);
    }
    r->next = NULL;
    return L;
}

//相关操作
LNode *GetElem(Linklist L,int i){
    //按照次序查找
    int j = 1;
    LNode *p = L->next; //从头指针开始
    //注意函数类型是结点类型的指针，指向结点 故：
    if(i == 0) return L;
    if(i < 1) return NULL; //这里解释一下，上面已经判断了i != 0，则这里是判断i是否<0，返回NULL
    while(p && j<i){
        p = p->next;
        j++;
    }//解释一下这里的while循环  ，p不等于NULL是为了防止i>单链表长度，然后只能顺序访问到i结点
    return p;
}
//按照值查找表结点

LNode *LocateElem(Linklist L,int e){
    LNode *p = L->next;
    while(p != NULL && p->data != e){
        p = p->next;
    }
    //以上while循环有两个终止条件：1，p=NULL即不存在相等 2，p->data = e 则返回当前结点p的指针
    return p;
}

//插入
int GetLength(Linklist L){
    int count = 0;
    LNode *p = L->next;
    while(p){
        p = p->next;
        count++;
    }
    return count;
}
bool insert(Linklist L,int x,int location){
    int len = GetLength(L);
    if(location > len+1 && location < 0) return false;
    LNode *p,*s;
    s->data = x; 
    p = GetElem(L,location-1);
    s->next = p->next;
    p->next = s;
    
    return true;
}
//删除
bool del(Linklist L,int location){
    int len = GetLength(L);
    if(location > len && location <= 0) return false;
    LNode *p ,*q; //q为被删除结点，p为q的前继结点
    p = GetElem(L,location-1);
    q = p->next; //让p指向q结点，这样可以方便的访问q的下一个结点
    p->next = q->next;
    free(q);//释放q结点所占用的存储空间
    return true;
}


//双链表
