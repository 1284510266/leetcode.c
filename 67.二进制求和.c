/*
 * @lc app=leetcode.cn id=67 lang=c
 *
 * [67] 二进制求和
 */

// @lc code=start
#include<stdio.h>
#include<string.h>

char *addBinary(char * a,char * b){
    int len, lena=strlen(a), lenb=strlen(b), carry=0, i=lena-1, j=lenb-1,k,num;
    len=lena>lenb?lena+1:lenb+1;
    char* ans=(char*)malloc(sizeof(char)*(len+1));
    ans[0]='0';
    ans[len]='\0';
    k=len-1;
    while(i>-1||j>-1||carry){
        num=(i>-1?a[i]-'0':0)+(j>-1?b[j]-'0':0)+carry;
        carry=0;
        if(num>1){
            carry=1;
            num=num-2;
        }
        ans[k--]=num+'0';
        j--;
        i--;
    }
    if(ans[0]=='0'){
        for(i=0; i<len-1;i++)
            ans[i]=ans[i+1];
        ans[len-1]='\0';      
    }
    return ans;
}

    
//为啥我写的总是溢出了、呢，还是太菜了
//     int num_a = 0;
//     int num_b = 0;
//     char *c,*result;
//     int j =0;

//     int len_a = strlen(a);
//     int len_b = strlen(b);

//     for(int i = len_a-1;i >= 0;i++){
//         num_a = num_a + pow(2,len_a-i-1) * a[i];
//     }
//     for(int i = len_b-1;i >= 0;i++){
//         num_b = num_b + pow(2,len_b-i-1) * b[i];
//     }

//     num_a = num_a + num_b;

//     while(num_a > 0){
//         c[j]  = num_a % 2;
//         num_a = num_a / 2;
//         j++;
//     }
//     int len_c = strlen(c);
//     for(int i = 0;i < len_c;i++){
//         result[i] = c[len_c-1-i];
//     }
//     return result;

// @lc code=end

