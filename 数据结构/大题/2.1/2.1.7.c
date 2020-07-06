//在刷leetcode的时候做过一个合并两个有序链表的题目
#include<stdio.h>
#include<stdbool.h>
#define maxsize 50
 struct Sqlist{
    int data[maxsize];
    int length;
};

//两有序表
int min_length(int a,int b){
    return a<b? a:b;
}
bool new_sqlist(struct Sqlist L1,struct Sqlist L2,struct Sqlist L3){
    int len = min_length(L1.length,L2.length);
    int i;
    //突然发现没有对L3.length进行定义
    if((L1.length + L2.length) > L3.length) 
            return false;
    for(i = 0;i < len;i++){
        if(L1.data[i] < L2.data[i])
            L3.data[i] = L1.data[i];
        else
            L3.data[i] = L2.data[i];
    }
    //多出来的一部分如何判断是哪个表的呢？
    //暴力一点
    if(L1.length >= L2.length)
        for(int j = i;j < L1.length;j++){
            L3.data[j] = L1.data[j];
            L3.length = L1.length;
        }
    else
        for(int j = i;j < L2.length;j++){
            L3.data[j] = L2.data[j];
            L3.length = L2.length;
        }
    return true;
}