#include<stdio.h>
#include<stdbool.h>
#define maxsize 50
 struct Sqlist{
    int data[maxsize];
    int length;
};


//关键词 有序表 
bool del_repeat(struct Sqlist L){
    //另外一种复杂度低的算法：
    //从顺序表的data域第一个元素作为另外一个顺序表的开始则
    int i,j;  //j用来遍历
    if(L.length == 0) return false;
    for(i = 0,j = 1;j < L.length;j++){
        if(L.data[i] != L.data[j]){
            L.data[i] = L.data[j];  //不相同则更新 新的那个顺序表
            i++;
        }
        L.length = i + 1;  //这里的加1是由于数组和顺序表的下表方式不同，一个从0开始一个从1
        return true;
    }

    // //使用值更新
    // int k = L.data[0];//有序表 往后比较，若>k 则更新k，若=k 则删除
    // for(int i = 1;i < L.length;i++){
    //     if(L.data[i] == k){
    //         for(int j = i;j < L.length-1;j++){
    //             L.data[i] = L.data[i+1];
    //             L.length--;
    //         } //前移
    //     }else{
    //         k = L.data[i]; //大于 则更新k
    //     }
    // }
}