/*
 * @lc app=leetcode.cn id=16 lang=c
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
int MIN(int a ,int b){
    return a>b? b:a;
}

int threeSumClosest(int* nums, int numsSize, int target){
    //排序
    
    // //双指针咋弄三个值呢？
    // //一个想法是：固定一个指针，初值为nums[0]
    // //双指针在固定指针的右边扫描，找出比sub值小的三数和，直至扫描完第一组
    // //对固定指针右移，继续扫描右边剩余元素
    // //最后应该只剩target-3，target-2，target-1，三个元素
    // //可能会超时

    // int i = 0,j ,k;
    // int p1 = nums[i];
    // int p2 = nums[j];
    // int p3 = nums[k];
    // int sum = 0;
    // int sub = 0;
    // while(i < numsSize-2){
    //     j = i+1;
    //     k=target-1;
    //     while(j<k && k<numsSize){
    //         sum = p1 + p2 + p3;
    //         sub = MIN(abs(target-sum),sub);
    //         //
    //     }
    //     i++;
    // }
}
// @lc code=end

