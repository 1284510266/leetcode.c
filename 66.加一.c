/*
 * @lc app=leetcode.cn id=66 lang=c
 *
 * [66] 加一
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    // //从最后一位加，若最后一位不为9，就不用考虑进位
    for(int i = digitsSize - 1; i >= 0;i--){
        if(digits[i] < 9){
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        else
            digits[i] = 0;
    }
    //这里就是，从最后一位往前遍历，
    //如果遍历的过程中，某一位是9，那么就置0同时进位(遍历到下一位同时加一)，反之若i=0时不为9，则可以通过return digits直接返回
    //反之就是类似[9] [99] [999]之类的 就直接用[10] [100] [1000]创一个比原来digits大一的数组返回即可。
    int* result = (int*) malloc ((digitsSize + 1) * sizeof (int));    
    result[0] = 1;
    for(int i = 1;i < (digitsSize + 1);i++){
        result[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return result;
}

    // //单纯从数组考虑太复杂，涉及到很多进位问题，直接来回转换数组和数字
    // int number = 0;
    // int t      = 0;
    // int num[100];
    // int len    =0;
    // int m      =1;
    // for(int i =digitsSize-1;i >= 0;i--){
    //     number=number + pow(10,(digitsSize-i-1)) * digits[i];
    // }

    // number = number + 1;
    // //到这是没问题的 number=124；
    // //再把number转化成为数组

    // while(number > 0){
    //     num[t] = number % 10; //从个位开始存
    //     number = number / 10;
    //     t++; 
    // }
    
    // while(num[m] != 0){
    //     len=len+1;
    //     m++;
    // }
    // len=len+1;

    // if(len > digitsSize)
    //     *returnSize = digitsSize + 1;
    
    // int* result=(int*)malloc(sizeof(int)*(digitsSize+1));
    // for(int j = 0;j < len;j++){
    //     result[j] = num[len-1-j];
    // }
    
    // return result;

// @lc code=end

