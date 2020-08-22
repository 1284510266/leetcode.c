/*
 * @lc app=leetcode.cn id=219 lang=c
 *
 * [219] 存在重复元素 II
 */

// @lc code=start

#include<stdio.h>
#include<stdbool.h>
bool containsNearbyDuplicate(int* nums, int numsSize, int k){
    int i,j = numsSize-1;
    bool ret = false;
    for(;j >= k;j--){
        for(i = 0;i < j;i++){
            if(nums[i] == nums[j]){
                if((j-i) <= k){
                    ret = true;
                    break;
                }
            }
        }
    }
    return ret;
}


// @lc code=end

