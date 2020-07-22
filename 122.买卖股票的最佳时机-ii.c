/*
 * @lc app=leetcode.cn id=122 lang=c
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start


int maxProfit(int* prices, int pricesSize){
    int profile = 0;
    for(int i = 0;i < pricesSize-1;i++){
        if(prices[i] < prices[i+1])
            profile = profile + prices[i+1] - prices[i];  
    }
    return profile;
}


// @lc code=end

