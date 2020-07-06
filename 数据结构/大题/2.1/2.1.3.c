#include<stdio.h>

#define maxsize 50
 struct Sqlist{
    int data[maxsize];
    int length;
};

void del_x(struct Sqlist L,int x){
    //用k来记录新顺序表的长度
    //要满足时间复杂度O（n）的要求，那就不能用往前移的循环，只能用循环来读data数组
    int k = 0;
    for(int i = 0;i < L.length;i++){
        if(L.data[i] != x){          //用直接覆盖的方式来达到删除的目的
            L.data[k] = L.data[i];
            k++;
        }
    }
    L.length = k; //更新长度
}