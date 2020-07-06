#include<stdio.h>
#include<malloc.h>
/*
 * @lc app=leetcode.cn id=20 lang=c
 *
 * [20] 有效的括号
 */

// @lc code=
// #define MAXSIZE 100
// typedef struct{
//     char *base;
//     char *top;
//     int stacksize;
// }SqStack;

// //初始化
// char InitStack(SqStack s){
//     s.base= (char*)malloc(MAXSIZE);
//     if(!s.base) printf("OVERFLOW");
//     s.top=s.base;
//     s.stacksize=MAXSIZE;
//     return 0;
// }
// char push(SqStack s,char e){
//     if(s.top-s.base==s.stacksize) return 0;
//     *s.top=e;
//     *s.top++;
//     return 1;
// }

// char pop(SqStack s,char e){
//     if(s.top==s.base) return 0; //栈空
//     e=*--s.top; //s.top减一，同时e指针存储s.top指针指向的值
//     return 1;
// }

// bool StackEmpty(SqStack s){
//     if(s.top==s.base)
//         return 1;
//     else
//         return 0;
// }
// char GetTop(SqStack s){
//     char e;
//     if(s.top != s.base) 
//         e=*(s.top-1);;
//     return e;
// }
// bool isValid(char *s){
//     //暴力法
//     int flag=1;
//     char first=s[0];
//     SqStack m;
//     char x;
//     for(int i=0;first!='\0' && flag;i++){
//         switch(first){
//             //左括号直接压栈
//             case '(' :
//             case '{' :
//             case '[' :
//                 push(m,first);
//                 break;
//             case ')':
//                 if(!StackEmpty(m) && GetTop(m)=='('){
//                 //如果栈不为空 同时栈顶为对应的括号
//                     pop(m,x);   
//                 }
//                 else flag=0;
//             break;
//             case '}':
//                 if (!StackEmpty(m) && GetTop(m)=='{')
//                 {
//                     pop(m,x);  
//                 }
//                 else flag=0;
//             break;
//                 if (!StackEmpty(m) && GetTop(m)=='[')
//                 {
//                     pop(m,x);  
//                 }
//                 else flag=0;
//             break;
//         }
//         first=s[i+1];
//     }
//     if (StackEmpty(m) && flag==1) return true;
//     else return false;
    bool isValid(char * s){
        if(*s == 0) return true;    // 空字符串显然符合
    
        int len = strlen(s);
        if(len & 1) return false;   // 奇数长度的字符串显然不符合
        char stack[len/2+1];        // 只检查*s的前一半，
        // i遍历*s，top管理stack，如果前一半未出栈且下一个还不能匹配，不符合
        for(int i=0, top=-1; i<len && top<len>>1; ++i){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                stack[++top] = s[i];// 如果是左括号们，欢迎入栈
            else if(top == -1)
                return false;       // 不是左括号们，栈空则无法配对，不符合
            else if(s[i] == stack[top]+1 || s[i] == stack[top]+2)
                stack[top--] = 0;   // 不是左括号们，栈非空，当前和栈顶配对，出栈
            else
                return false;       // 不是左括号们，栈非空，当前和栈顶不配对，不符合
        }
        return !stack[0];           // 最后栈为空则符合，不为空则不符合
    }


// @lc code=end

