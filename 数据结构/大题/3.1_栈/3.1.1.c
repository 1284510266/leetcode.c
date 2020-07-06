#include<stdio.h>
#include<stdbool.h>
//顺序栈的实现(存储方式类似数组)
//下标从0开始
#define MAXSIZE 50

typedef struct SqStack{
    int data[MAXSIZE];
    int top;
}SqStack;
