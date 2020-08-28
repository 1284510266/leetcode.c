#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    char m = 'L';
    char* p = (char*)malloc(sizeof(char) * 50);
    mempcy(p,m,50);
    printf("%s",p);
}