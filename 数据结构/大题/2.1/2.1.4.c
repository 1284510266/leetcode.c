#include<stdio.h>
#include<stdbool.h>

#define maxsize 50
 struct Sqlist{
    int data[maxsize];
    int length;
};

//这里的s t都是elemtype假设的数据类型 int
bool del_s_t(struct Sqlist L,int s,int t){
    //为有序表 则只需要找到分界点就好了
    if(s >= t && L.length == 0)
        return false;
    //由于是有序表，则需要找到第一个>s的i，注意有可能i>L.length
    int i,j;
    for(i = 0; i < L.length && L.data[i] < s;i++)  //注意这里的<s是终点循环的条件之一，注意别弄反了
        if(i >= L.length) return false;
    //从i开始找到第一个>t的元素
    for(j = i;j < L.length && L.data[j] <= t;j++); //这里的<=t也是
    //以上两条for循环就得到了人口i和出口j
    //前移
    for(;j < L.length;i++,j++){
        L.data[i] = L.data[j];
    }
    //更新length ，这个绝对不能忘记
    L.length = i;
    return true;
}



    //这种算法时间复杂度有点高
    // if(s > t && L.length == 0)
    //     return false;
    // //跟上一条一样 用k
    // int k = 0;
    // for(int i = 0;i < L.length;i++){
    //     if(L.data[i] > s && L.data[i] < t){
    //         L.data[k] = L.data[i];
    //         k++;
    //     }
    // }
    // L.length == k;
    // return true;
