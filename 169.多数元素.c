/*
 * @lc app=leetcode.cn id=169 lang=c
 *
 * [169] 多数元素
 */

// @lc code=start


int majorityElement(int* nums, int numsSize){
    //排个序，就好做很多
    //解法一：摩尔投票法
    int tag = 0,result = 0;
    for(int i = 0;i < numsSize;i++){
        if(tag == 0){
            result = nums[i];
            tag++;
        }else{
            result == nums[i]? tag++:tag--;
        }
    }
    return result;
}


// @lc code=end

