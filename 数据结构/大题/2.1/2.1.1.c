//选用参数返回 即指针返回，可以返回多个值
// 选择数据类型为int  ，书上是ElemType
#include<stdio.h>
#include<stdbool.h>
#define maxsize 50
 struct Sqlist{
    int data[maxsize];
    int length;
};
 
//注释的地方都是需要注意，容易出错的地方 ！嗯我就是容易细节出错
bool del_min(struct Sqlist L,int *value){
    if(L.length == 0)
        return false;
    //用value返回最小值
    value = L.data[0];
    int position = 0;//定位，初始设min=data[0]
    for(int i = 1;i < L.length;i++)//从一开始循环，因为value的值就是data[0]
    {
        if(L.data[i] < value){
            value = L.data[i]; //更新value
            position = i;
        }
        //填充的过程也可以看着是对i处元素的删除
        L.data[position] = L.data[L.length-1];
        L.length--;//顺序表长度要记得更新；
        
    }
    return true;
}