/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start


int maxProfit(int* prices, int pricesSize){
    int profile = 0;
    int min;
    if(pricesSize <= 1)
        return 0;
    //主题思路：将第i天的前i-1天看作一个整体。
    //1.求出前i-1天的最小值min。
    //2.计算 profile = i - min（i-1），不断更新profile。
    for(int i = 1;i < pricesSize;i++){
        min = prices[0];
        for(int j = 1;j < i;j++){
            if(prices[j] < min)
                min = prices[j];
        }
        if(profile <(prices[i] - min))
            profile = prices[i] - min;
    }
    
    return profile;
}


// @lc code=end

