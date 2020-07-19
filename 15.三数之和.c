/*
 * @lc app=leetcode.cn id=15 lang=c
 *
 * [15] 三数之和
 */

// @lc code=start


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    //排个序
    int a;
    for(int i = 0;i < numsSize;i++){
        if(nums[i] > nums[i+1]){
             a = nums[i];
             nums[i] = nums[i+1];
             nums[i+1] = a;
        }
    }
    int j = 0;
    int m,n,first,sum;
    int *result = (int*)malloc(sizeof(int) * 3);
    while(j < numsSize-2){
        first = nums[j];
        m = j+1;
        n = numsSize-1;
        while(m < n){
            sum = first+m+n;
            if(sum == 0){
                result[0] = first; 
                result[1] = m; 
                result[2] = n;
            }else if(sum < 0)
                m++;
            else
                n--;
        }
        j++;
    }
    return result;
}
// @lc code=end

