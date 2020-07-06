/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start


int removeElement(int* nums, int numsSize, int val){
    int count=numsSize;
    int k;
    if(numsSize==0) return 0;

    for(int i=0;i<count;i++){
        if(nums[i]==val)
        {
            k=i;
            while(k<count-1){
                nums[k]=nums[k+1];
                k++;
            }
            count=count-1;
            i--;
        }
    }
    return count;
    
}


// @lc code=end

