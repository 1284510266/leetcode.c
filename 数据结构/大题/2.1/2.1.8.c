#include<stdio.h>
#include<stdbool.h>
#define maxsize 50
 struct Sqlist{
    int data[maxsize];
    int length;
};

//已知length m n
int exchange_sqlist(struct Sqlist Array,int m,int n){
    // struct Sqlist A;
    // struct Sqlist B;
    // A.length = m; B.length = n;
    //最好想到的办法就是新建一个数组，输入完了之后
    int *num;
    int count = 0;
    for(int i = m;i < Array.length;i++){
        num[count] = Array.data[i];
        count++;
    }
    //count = n-1;
    for(int i = 0;i < m;i++){
        num[count] = Array.data[i];
        count++;
    }
    return num;
}
//从题解的思路：先整体倒置数组Array，再分别倒置前n项和后m项  复杂度O（（m+n）mn ）
//而我这个只用了这个循环 复杂度O（mn）