/*
 * @lc app=leetcode.cn id=38 lang=c
 *
 * [38] 外观数列
 */

// @lc code=start
// char *search(char *n){
//     int count = 0;
//     int number = 0;
//     int j = 0,i;
//     int len = strlen(n);
//     char *string = (char*)malloc(sizeof(char)*2*len);
//     while(j < len){
//         for(i = j+1;i < len;i++){
//             if(n[i] == n[j])
//                 count++;
//             else
//                 break;
//         }
//     string[number] = count+1;
//     string[number + 1] = n[i];
//     number = number + 2;
//     j = i;
//     }
//     return string;
// }
char *count(char *n){

}
char *getnext(int n){

}
char * countAndSay(int n){
    //百度：外观序列有许多有意思的性质，比如序列中的第n项L[n]随着n越来越长，但是除数字1,2,3，其他数字永远不会出现。
    //某项的外观数列就是对前一项的字符串连续数字的扫描。
    if(n == 1)
        return "1";
    int count = 1;
    int i,j,k=2;
    char *str = (char *)malloc(sizeof(char)*2*k);
    str = "1";
    while(k != n){
        int compare = str[0];
        for(i = 0;i < )
    }
}


// @lc code=end

