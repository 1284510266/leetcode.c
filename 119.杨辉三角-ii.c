/*
 * @lc app=leetcode.cn id=119 lang=c
 *
 * [119] 杨辉三角 II
 */

// @lc code=start

//     int** ret = (int**)malloc(sizeof(int*) * 1000);//即假设n<1000;
//     *returnSize = rowIndex+1; 
//     //由示例知，结果是列形式，而returnColumnSizes就是列的大小
//     //一级指针指示*returnColumnSize数组存储的列的个数。
//     int** returnColumnSizes;
//     *returnColumnSizes = (int*)malloc(rowIndex * sizeof(int));  

//     //构建基本框架：
//     for(int i = 0;i < rowIndex;i++){
//         (*returnColumnSizes)[i] = i+1; //给第i行的数组分配一个i+1的空间；
//         //分配第i行数组空间，assume caller calls free().就不用free()了
//         ret[i] = (int*)malloc(sizeof(int) * (i+1));
//         //第i行有i个元素，且开头和结尾的元素都为1
//         ret[i][0] = 1;
//         ret[i][i] = 1;
//     }
//     //确定了基本的框架之后，利用题目中计算杨辉三角的公式，补充其他元素
//     for(int i = 2;i < rowIndex;i++){
//         for(int j = 1;j < i;j++){
//             ret[i][j] = ret[i-1][j-1] + ret[i-1][j];
//         }
//     }
//     return ret[rowIndex];
// }

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    //以下是评论区大佬写的，是真的很牛，尤其是num[j] = num[j] + num[j-1];这段覆盖式更新数组元素是真的强！！
    *returnSize = rowIndex + 1;
    int* num = (int*) malloc ((rowIndex + 1) * sizeof(int));
    for(int i = 0;i <= rowIndex;i++)
        for(int j = i;j >= 0;j--)
        {
            if(j == 0 || j == i)
                num[j] = 1;
            else
                num[j] = num[j] + num[j-1];
        }
    return num;
}


// @lc code=end

