/*
 * @lc app=leetcode.cn id=69 lang=c
 *
 * [69] x 的平方根
 */

// @lc code=start


int mySqrt(int x){
    int min = 0;
    int max = x;

    if(x == 1) 
        return 1;
    while(max - min > 1){
        int mid = (max + min)/2;
        if(x/mid < mid){ // m^2 > x 
            max = mid;  //缩小范围
        }else 
        {
            min = mid;
        }
    }
    return min;
}


// @lc code=end

