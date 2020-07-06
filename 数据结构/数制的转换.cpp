#include<stido.h>
// 顺序栈
//利用取余法实现十进制到八进制的转换
//先进后出

//新建一个栈 int型
//status 在c中相当于int
#define MAXSIZE 100
typedef struct{
    int *base;
    int *top;
    int StackSize;
}SqStack;
//初始化 
int Initint(SqStack &s){
    s.base=new int[MAXSIZE];
    if(!s.base) printf("overflow");
    s.top=s.base;  //栈的头指针与栈底指针相同
    s.StackSize=MAXSIZE; //栈大小为最大内存空间
    return ok;
}
//入栈
int push(SqStack &s,int e){
    if(s.top-s.base==s.StackSize) return error;
    *s.top=e;
    *s.top++;
    return ok;
}
//出栈
int pop(SqStack &s,int &e){
    if(s.top==s.base) return error; //栈空
    e=*--s.top; //s.top减一，同时e指针存储s.top指针指向的值
    return ok;
}