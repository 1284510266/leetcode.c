/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start

int return_number(char str){
    //建立一个函数返回roman数组对应的整数
    char roman[7]={'I','V','X','L','C','D','M'};//从小到大
    int  nums[7]={1,5,10,50,100,500,1000};
    int number;
    for(int i=0;i<7;i++){
        if(roman[i]==str)
            number=nums[i];
    }
    return number;
}
int romanToInt(char * s){
    //要理解字符串是存放在字符数组里面的，可以把s当作一个数组
    int left,right;
    int result=0;
    //顺序读，左边小于右边则右边-左边，可能情况只有IV IX XL XC CD CM在第一次循环应该可以解决
    //正常情况是左边大于等于右边 如VII VIII III  XVI
    for(int i=0;i<strlen(s)-1;i++){
        left = return_number(s[i]);
        right = return_number(s[i+1]);
        //把已判断完成的两个融合成一个result
        result = (left>=right)?result+left:result-left;
    }
    result+=return_number(s[strlen(s)-1]);
    return result;
}


// @lc code=end

