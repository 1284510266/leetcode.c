/*
 * @lc app=leetcode.cn id=198 lang=c
 *
 * [198] 打家劫舍
 */

// @lc code=start

int MAX(int a,int b){
    return (a>b? a:b);
}
int rob(int* nums, int numsSize){
    //从后往前看，若第n个房子取得最大值，则最大值为 MAX[n-2]+nums[n]
    //若不在n取得最大值，则最大值为MAX[n-1]
    int a =0 , b= 0,c;
    for(int i = 0;i < numsSize;i++){
        c =MAX(b,a+nums[i]);
        a = b;
        b = c;
    }
    return b;
}
// @lc code=end

