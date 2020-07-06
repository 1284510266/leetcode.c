/*
 * @lc app=leetcode.cn id=88 lang=c
 *
 * [88] 合并两个有序数组
 */

// @lc code=start


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    //从后往前，避免过多的移动
    int tag1 = m - 1;
    int tag2 = n - 1;
    int tag  = m + n - 1;
    while (tag > -1)
    {
                if(tag1<0){     //处理边界问题，防止nums[tag]数组越界
            nums1[tag]=nums2[tag2];
            tag2--;
        }
        else if(tag2<0){
            nums1[tag]=nums1[tag1];
            tag1--;
        }
        else if(nums1[tag1]>nums2[tag2]){
            nums1[tag]=nums1[tag1];
            tag1--;
        }
        else{
            nums1[tag]=nums2[tag2];
            tag2--;
        }
        tag--;
    }
    
    
    
}
// @lc code=tag

