#include<stdio.h>
#include<stdbool.h>

#define maxsize 50
 struct Sqlist{
    int data[maxsize];
    int length;
};
//跟第四天差不多，多了一个=s =t的条件
bool del_s_t(struct Sqlist L,int s,int t){
    if(s >= t && L.length == 0)
        return false;
    //与2.1.3对比，用k的方法是相反的
    int k = 0;
    for(int i = 0;i < L.length;i++){
        if(L.data[i] >= s && L.data[i] <= t){
            k++;
        }else{
            L.data[i-k] = L.data[i];  //不等则前移k位
        }
    }
    L.length = L.length - k;
    return true;
    //以上算法是从前往后扫描，若等则k+1，若不等，则前移k位
    //也可以从后往前扫描，但是没扫完一次就要前移，时间复杂度高
}