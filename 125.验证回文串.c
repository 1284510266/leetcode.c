/*
 * @lc app=leetcode.cn id=125 lang=c
 *
 * [125] 验证回文串
 */

// @lc code=start
#include<stdio.h>
#include<stdbool.h>
    //可观察到中间的无关字符是空格和逗号，通过++，--可以解决
    //双指针，现在需要解决的是如何忽略大小写
    //可通过ASCII 码来做，限制到48~122，再剔除58~64 91~96
bool isPalindrome(char * s){
    int length = strlen(s);
    int i = 0,j = length - 1;
    int front;
    int rear;

    while(i < j && j < length){
        front = (int)s[i];
        rear = (int)s[j];
        if((48 <= front <= 57 || 65 <= front <= 90 || 97 <= front <= 122) && (48 <= rear <= 57 || 65 <= rear <= 90 || 97 <= rear <= 122)){
                if(front == rear || abs(rear - front) == 32){
                    i++;
                    j--;
                }else
                    break;
        }else if(!(48 <= front <= 57 || 65 <= front <= 90 || 97 <= front <= 122)){ 
                    i++;
                }else if(!(48 <= rear <= 57 || 65 <= rear <= 90 || 97 <= rear <= 122))
                    j--;
    }
    if((j - i) <= 1)
        return true;
    else
        return false;
}
// @lc code=end

