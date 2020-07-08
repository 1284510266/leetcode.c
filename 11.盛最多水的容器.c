/*
 * @lc app=leetcode.cn id=11 lang=c
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
int MIN(int a,int b){
    return a>b? b:a;
}
int MAX(int a,int b){
    return a>b? a:b;
}

int maxArea(int* height, int heightSize){
    //水的容量就是（ai - aj）*min（ai，aj）

    //题目要求n值至少为2
    if(heightSize < 2)
        return 0;

    //提示：使用two points方法
    int i = 0;
    int j = heightSize - 1;
    int max = 0;

    //知道了容量的表达式那么就要开始使用设定初值，然后比较的方法
    //若新状态的i，j的容量比目前已知的容量小，则短的一边向内缩
    //若比已知大，则max=目前容量，在这种情况其实和循环一开始的情况类似，
    //那么已经知道了规则，那么先迈出左脚还是右脚其实都可以。
    //j=i 则容量为0，j<i,则重复搜索。
    while(j > i){
        max = MAX(max,((j-i)*MIN(height[i],height[j])));
        if(height[i] >= height[j]) 
            j--;
        else
            i++;
    }  
    return max;
}


// @lc code=end

