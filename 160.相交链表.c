/*
 * @lc app=leetcode.cn id=160 lang=c
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include<stdio.h>
#include<stdbool.h>
// struct ListNode{
//     int val;
//     struct ListNode *next;
// };
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    //一个办法是将链表转化为数组，但是不满足复杂度的要求
    //一个想法是用指针，指针存储的是地址，由链表存储性质可知，若地址相同，则相交
    //链表的一个缺点是无法直接得到链表的长度，那可有以下几种解决方法：
    //1，分别定义两个指针，双层for循环，找到B中跟A相同的节点，这样的话时间复杂度O（mn），空间复杂度O（1）
    //2，依然是两个指针，当到达某一链表的终点时，下一个节点指向另外一个节点的头节点，由于A+B = B+A ，故不用考虑链表
    struct ListNode *A,*B;
    A = headA;
    B = headB;

    while(A != B){
        A = ((A == NULL)? headB:A->next);
        B = ((B == NULL)? headA:B->next);
    }
    return B;
}
// @lc code=end

