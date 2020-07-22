/*
 * @lc app=leetcode.cn id=141 lang=c
 *
 * [141] 环形链表
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
// struct ListNode
// {
//     int val;
//     struct ListNode *next;
// };

bool hasCycle(struct ListNode *head) {
    if(head == NULL || head->next == NULL)
        return false;
    struct ListNode *fast = head->next;
    struct ListNode *slow = head;
    while(fast != slow){
        if(fast->next == NULL || fast->next->next == NULL)
            return false;
        fast = fast->next->next;
        slow = slow->next;
    }
    return true;
}
// @lc code=end

