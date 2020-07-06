#include<stdio.h>
#include<stdbool.h>
#define maxsize 50
 struct Sqlist{
    int data[maxsize];
    int length;
};

//题目要求用最短时间，我能马上想到的还是最简单的两个循环
//可以用二分法
void search_x(struct Sqlist L,int x){
    int low = 0;
    int high = L.length-1;
    int mid ;
    while(low <= high){
        mid = (low + high)/2;
        if(L.data[mid] == x) break;
        else if(L.data[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    //以上用二分法来确定L.data[i]=x的i值
    if(L.data[mid] == x && mid != L.length-1){
        //替换
        int t = L.data[mid];
        L.data[mid] = L.data[mid+1];
        L.data[mid+1] = t;
    }
    if(low > high){
        int i;
        for(i = L.length-1;i > high ;i--) L.data[i+1] = L.data[i];
        L.data[i+1] = x;
    }
}