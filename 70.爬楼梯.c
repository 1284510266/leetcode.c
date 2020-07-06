/*
 * @lc app=leetcode.cn id=70 lang=c
 *
 * [70] 爬楼梯
 */

// @lc code=start


int climbStairs(int n){
    // n=1  1
    // n=2  2
    // n=3  3 ==1+2
    // n=4  5 ==2+3
    // n=5  8 ==3+5
    // n=6  13==5+8
    int result;
    if(n <= 2)
        return n;
    int result1 = 1;
    int result2 = 2;
    int result3;
    for(int i = 3;i <= n;i++){
        result3 = result1 +result2;
        result1 = result2;
        result2 = result3;
    }
    return result2;
}


// @lc code=end

