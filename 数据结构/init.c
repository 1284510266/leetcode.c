#include<stdio.h>
#include<stdbool.h>
#include<string>
//串的实际长度只能小于MAX，两种表示方法 一，额外变量放串的长度 二，在串后面加一个'\0'此时串长为隐含值
//顺序表
#define MAX 255
typedef struct{
    char ch[MAX];
    int length;
}SString;

//堆分配存储
typedef struct{
    char *ch;
    int length;
}HString;

//块链存储:用单链表存储，每个结点称为一个块，可以存放一个或多个字符，空的地方用 # 填充

//串的操作
int index(SString s , SString T){
    int i = 1;
    int j = 1;
    while(i < s.length && j < T.length){
        if(s.ch[i] == T.ch[j]){
            i++;
            j++;
        }else{
            i = i-j+2;   //这里为什么要加二呢，因为每次匹配都是j=1开始，-j+2就相当于匹配失败，i后移一位
            //由于从匹配开始 i和j的增速相同，故匹配开始和匹配中 失败时的表达式是相同的。
            j = 1;
        }
    }
    //上述while()循环有两种退出条件 则要区分
    if(j > T.length )
        return i-T.length;
    else 
        return 0;
}