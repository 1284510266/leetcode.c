/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start


bool isPalindrome(int x){
//首先判断正负
    long f=0;
    int temp=x;
    for(;x;f=f*10+x%10,x/=10);//产生reverse数f  ;x只要不为0则for循环继续
    if(temp==f&&temp>=0)
        return true;
    else 
        return false;
}


// @lc code=end

