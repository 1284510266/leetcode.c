/*
 * @lc app=leetcode.cn id=190 lang=c
 *
 * [190] 颠倒二进制位
 */

// @lc code=start
typedef unsigned int uint32_t;

uint32_t reverseBits(uint32_t n) {
    uint32_t ans = 0;
    for(int i = 0;i < 32;i++){
        ans = ans*2 + abs(n % 2);
        n /= 2;
    }
    return ans;
}
// @lc code=end

