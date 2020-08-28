/*
 * @lc app=leetcode.cn id=344 lang=c
 *
 * [344] 反转字符串
 */

// @lc code=start


void reverseString(char* s, int sSize){
    //简单一手双指针
    if(sSize <= 1)
        return;
    
    int front = sSize-1;
    int rear = 0;
    char temp;
    while( rear < front){
        temp = s[rear];
        s[rear] = s[front];
        s[front] = temp;
        rear++;
        front--;
    }
    // for(int i = 0;i < sSize/2;i++){
    //     temp = s[i];
    //     s[i] = s[--front];
    //     s[front] = temp;
    // }
    return s;
}
// @lc code=end

