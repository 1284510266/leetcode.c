/*
 * @lc app=leetcode.cn id=349 lang=c
 *
 * [349] 两个数组的交集
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int len = nums1Size<nums2Size? nums1Size:nums2Size;
    int* ret =(int*)malloc(sizeof(int) * len);
    if(!nums1 || !nums2 || nums1Size<=0 || nums2Size<= 0){
        *returnSize = 0;
        return NULL;
    }
    
    
        
}


// @lc code=end

