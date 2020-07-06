/*
 * @lc app=leetcode.cn id=28 lang=c
 *
 * [28] 实现 strStr()
 */

// @lc code=start

//KMP算法
void prefix_table(char pattern[],char prefix[],int n){
    prefix[0]=0; //第一个的prefix都是0
    int len = 0;
    int i   = 1;

    while(i < n){
        if(pattern[i] == pattern[len]){
            len++;
            pattern[i] = len;
            i++;
        }else{
            if(len > 0){
                len = prefix[len-1];
            }else{
                prefix[i] = len;
                i++;
            }
        }
    }
}
int strStr(char * haystack, char * needle){


}

// @lc code=end

//     if(needle == "") return 0; //needle为空

//     int len1 = (sizeof(haystack)/sizeof(char))-1;//haystack长度
//     int len2 = (sizeof(needle)/sizeof(char))-1;
//     int flag;
//     int i=0,k=1,j;
//     int count=0;
//     //找入口 用flag标记
//     while((haystack[i]!=needle) && i<len1){
//         i=i+1;
//     }

//     if(i<len1){
//         flag=i;
//         j=i;
//     } 

//     //判断是否完整
//     while((haystack[j+1]==needle[k]) && k<len2){
//             j=j+1;
//             k=k+1;
//             count=count+1;
//     }

//     if(count == len2)
//         return flag;
//     else
//         return -1;
// }
// //总是溢出内存，不知道咋办