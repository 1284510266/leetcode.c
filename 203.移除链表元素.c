/*
 * @lc app=leetcode.cn id=203 lang=c
 *
 * [203] 移除链表元素
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
// struct ListNode{
//     int val;
//     struct ListNode *next;
// };

struct ListNode* removeElements(struct ListNode* head, int val){
    if(!head)
        return head; //若head为空，则直接返回
    //可以这样理解： removeElems这个函数是求       
    head->next = removeElements(head->next,val);
    return head->val == val? head->next:head;
}

// @lc code=end

