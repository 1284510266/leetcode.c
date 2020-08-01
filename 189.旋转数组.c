/*
 * @lc app=leetcode.cn id=189 lang=c
 *
 * [189] 旋转数组
 */

// @lc code=start

void reverse(int* nums,int front,int rear){
    int temp ;
    while(front < rear){
        temp = nums[front];
        nums[front] = nums[rear];
        nums[rear] = temp;
        front++;
        rear--;
    }
}
void rotate(int* nums, int numsSize, int k){
    //评论看到的题解，很有技巧
    //创建一个翻转函数，实列如下：
    //原数组：1，2，3，4，5   翻转： 5，4，3，2，1
    //但如果k = 2，则结果应该是 4，5，||1，2，3
    //对比5，4，3，2，1 可以得到在上面的分解线处再来两次全反转
    //以上解法可以保证空间复杂度O（1）
    if(numsSize < 2)
        return;
    k = k % numsSize;
    reverse(nums,0,numsSize-1);
    reverse(nums,0,k-1);
    reverse(nums,k,numsSize-1);
}
// @lc code=end

