/*
 * @lc app=leetcode.cn id=118 lang=c
 *
 * [118] 杨辉三角
 */

// @lc code=start


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    int** ret = (int**)malloc(sizeof(int*) * 1000);//即假设n<1000;
    *returnSize = numRows; 
    //由示例知，结果是列形式，而returnColumnSizes就是列的大小
    //一级指针指示*returnColumnSize数组存储的列的个数。
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));  

    //构建基本框架：
    for(int i = 0;i < numRows;i++){
        (*returnColumnSizes)[i] = i+1; //给第i行的数组分配一个i+1的空间；
        //分配第i行数组空间，assume caller calls free().就不用free()了
        ret[i] = (int*)malloc(sizeof(int) * (i+1));
        //第i行有i个元素，且开头和结尾的元素都为1
        ret[i][0] = 1;
        ret[i][i] = 1;
    }
    //确定了基本的框架之后，利用题目中计算杨辉三角的公式，补充其他元素
    for(int i = 2;i < numRows;i++){
        for(int j = 1;j < i;j++){
            ret[i][j] = ret[i-1][j-1] + ret[i-1][j];
        }
    }
    return ret;
}


// @lc code=end

