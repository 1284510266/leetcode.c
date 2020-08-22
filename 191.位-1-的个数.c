/*
 * @lc app=leetcode.cn id=191 lang=c
 *
 * [191] 位1的个数
 */

// @lc code=start
typedef unsigned int uint32_t;
int hammingWeight(uint32_t n) {
    int count = 0;
    while(n != 0){
        count++;
        n &= (n-1);
    }
    return count;
}
// @lc code=end

