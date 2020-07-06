/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start


char * longestCommonPrefix(char ** strs, int strsSize){
    //字符串二维数组strs的存储方式
    // “nfhauhfiaoj”
    // “damjdijaiji”
    // “fainadijioj”
    //进行垂直扫描

    //如果字符串数组为空，直接返回""
    if(strsSize==0) return "";  
    //i，j分别表示列、行。
    //从第一个字符串读取，依此比较，strlen(strs[0])表示第一个字符串长度。
    for(int i=0;i<strlen(strs[0]);i++){   
        for(int j=1;j<strsSize;j++){   
            //垂直比较字符串，相同则跳过，不同则停止比较，直接输出已修改过的strs[0][i]
            if(strs[0][i]!=strs[j][i]){ 
                strs[0][i]='\0';
                break;
            }
        }
    }
    return strs[0];   
}


// @lc code=end

