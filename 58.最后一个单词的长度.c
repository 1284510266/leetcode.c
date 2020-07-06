/*
 * @lc app=leetcode.cn id=58 lang=c
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start


int lengthOfLastWord(char * s){
    int len = strlen(s) , result = 0;
    //首先 若为空，则输出0
    while(len > 0 && s[len-1] == ' ') //去掉后面的空格
        len--;
    
    //从后往前
    for(int i = len-1; i>=0 ; i--){
        if(s[i] != ' ')
            result++;
        else
            return result;
    }
    return result;
}
//函数isalpha()判断是否为字母(包括大小写)的c函数

// @lc code=end

