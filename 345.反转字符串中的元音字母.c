/*
 * @lc app=leetcode.cn id=345 lang=c
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start

#include<stdbool.h>
bool check(char m){
    if(m=='a' || m=='e' || m=='i' || m=='o' || m=='u' || m=='A' || m=='E' || m=='I' || m=='O' || m=='U')
        return true;
    else
        return false;
}
char * reverseVowels(char * s){
    //首先确定元音字母有 a，e，i，o，u
    //即有两个程序，一个是判断当前字母是否为元音字母，另外一个主程序则用来反转。
    //双指针
    int len = strlen(s);
    int front = len - 1;
    int rear = 0;
    char temp;
    if(len <= 1)
        return s;
    while(rear < front){
        while(rear < front && !check(s[rear]))
            rear++;
        while(rear < front && !check(s[front]))
            front--;
        temp = s[rear];
        s[rear] = s[front];
        s[front] = temp;
        front--;
        rear++;
    }
    // if(check(s[front]) && check(s[rear])){
    //     temp = s[front];
    //     s[front] = s[rear];
    //     s[rear] = temp;
    //     front--;
    //     rear++;
    // }else if(check(s[front])){
    //     rear++;
    // }else if(check(s[rear])){
    //     front--;
    // }else{
    //     rear++;
    //     front--;
    // }
    return s;
}


// @lc code=end

