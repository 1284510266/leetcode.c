#include<stdio.h>   
#include<string.h>   
int main(){   
    char a[1] ="1";
    char b[2] ="21" ;
    char *c;

    *c =  strcat(a,b);
    // *c = *a;
    // *a = *b;
    // *b = *c;
    
    printf("%s\n",c);
    //leetcode 66
    // int a[3] = {1,2,3}; 
    // int number = 0;
    // int t = 1;
    // int num[100];
    // int len = 0;
    // int m = 1;
    // int b[3];
    // for(int i =3-1;i >= 0;i--){
    //     number=number + pow(10,(3-i-1)) * a[i];
    // }
    // number = number +1;


    // while(number > 0){
    //     num[t] = number % 10; //从个位开始存
    //     number = number / 10;
    //     t++; 
    // }

    // while(num[m] != 0){
    //     len=len+1;
    //     m++;
    // }
    // len=len+1;

    // for(int i = 0;i < len;i++){
    //     b[i] = num[len-1-i];
    // }

    // for(int i = 0;i < len;i++){
    //     printf("%d\n",b[i]);
    // }
    

    // // int a[100]={0,2,1};
    // // int size =0;
    // // int i =1;
    // // while(a[i] != 0){
    // //     size=size+1;
    // //     i++;
    // // }
    // // printf("%d",size);
}    