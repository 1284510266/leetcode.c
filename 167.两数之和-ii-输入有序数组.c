/*
 * @lc app=leetcode.cn id=167 lang=c
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int *ret = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    int front,rear;
    int i = 0,j = numbersSize - 1;
    int add ;
    while (front < rear)
    {
        front = numbers[i];
        rear = numbers[j];
        add = front + rear;
        if(add == target){
            ret[0] = i+1;
            ret[1] = j+1;
        }else if(add < target)
                i++;
            else
                j--;
    }
    return *ret;
}


// @lc code=end

