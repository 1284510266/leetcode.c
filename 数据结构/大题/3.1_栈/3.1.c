#include<stdio.h>
#include<stdbool.h>
//顺序栈的实现(存储方式类似数组)
//下标从0开始
#define MAXSIZE 50

typedef struct SqStack{
    int data[MAXSIZE];
    int top;
}SqStack;

// 初始化
//表达式必须包含结构或联合类型
void InitStack(SqStack *s){
    (*s).top = -1;
    //等价于 s->top = -1;
}
//判断是否为空
bool StackEmpty(SqStack *s){
    if(s->top = -1)
        return false;
    else 
    return true;
}
bool push(SqStack *s,int x){
    if(s->top == MAXSIZE-1)
        return false;
    s->top = s->top + 1;  
    s->data[s->top] = x;  
    //or : s->data[++(*s).top] = x;
    return true;   //栈顶指针先加一 再传值
}
bool pop(SqStack *s,int x){
    if(s->top == -1)
        return false;
    x = s->data[s->top];
    s->top--;
    //or ： x = s-data[s->top--]
    return true;
}
bool GetTop(SqStack *s,int x){
    if(s->top == -1)
        return false;
    x = s->data[s->top];
    return true;
}
