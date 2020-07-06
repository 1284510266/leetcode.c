/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start

//并没有用到双指针，等会去看看大神的双指针解法
int removeDuplicates(int* nums, int numsSize){
    if(numsSize==0)
        return 0;

    int count=numsSize;
    int i;
    for(int j=0;j<count;j++){//读取数组元素，从第二项开始
        //由于是排序数组，故只可能a[i] <=a[i+1]
        for(int k=j+1;k<count;k++){
            if(nums[j]==nums[k]){
                i = j;
                while(i < count-1){
                    nums[i] = nums[i+1]; //前移
                    i++;
                }
                count--;
                k--;
            }
        }
    }
    return count;
}


// @lc code=end

