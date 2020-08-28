/*
 * @lc app=leetcode.cn id=551 lang=c
 *
 * [551] 学生出勤记录 I
 */

// @lc code=start

#include<stdio.h>
#include<stdbool.h>
bool search_A(char *s){
    int len = strlen(s);
    int count = 0;
    bool ret = true;
    for(int i = 0;i < len;i++){
        if(s[i] == 'A')
            count++;
        if(count > 1)
            ret = false;
    }
    return true;
}

bool checkRecord(char * s){
    //要求 "A" <= 1, 用search_A实现
    //不超过两个连续的“L”
    bool result = false;
    while(search_A(s) ){

    }
}


// @lc code=end

