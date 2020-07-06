#include<stdint.h>

//由于是顺序表的习题，需要频繁使用顺序表
#define maxsize 50
 struct Sqlist{
    int data[maxsize];
    int length;
};

void reverse(struct Sqlist L){
    for(int i = 0; i < L.length/2;i++){
        int m = L.data[i];
        L.data[i] = L.data[L.length-1-i];
    }
}