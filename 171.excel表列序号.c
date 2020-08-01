/*
 * @lc app=leetcode.cn id=171 lang=c
 *
 * [171] Excel表列序号
 */

// @lc code=start


int titleToNumber(char * s){
    //采用二十六进制，然后转化成十进制输出
    int sum = 0;
    int tem;
    int len = strlen(s);
    for(int i = 0;i < len;i++){
        tem = s[i]-'A'+1;
        sum = sum*26 + tem;
    }
    return sum;
}
// @lc code=end

