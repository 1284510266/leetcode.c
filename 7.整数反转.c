/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start
int reverse(int x){
    int  max = 0x7fffffff; 
    int  min = 0x80000000;
    long i=0;
    //用while循环，x不为0则继续循环
    while(x){
        i= i*10+x%10;//x%10保留个位
        x=x/10;//由于long整型，则只保留整数部分
    }
    return i<min || i>max?0:i;
}


// @lc code=end

