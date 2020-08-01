/*
 * @lc app=leetcode.cn id=172 lang=c
 *
 * [172] 阶乘后的零
 */

// @lc code=start


int trailingZeroes(int n){
    int count = 0;
    if(n < 5)
        return 0;
    while(n >= 5){
        count = count + n/5;
        n = n/5;
    }
    return count;
}


// @lc code=end

