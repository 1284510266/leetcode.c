/*
 * @lc app=leetcode.cn id=83 lang=c
 *
 * [83] 删除排序链表中的重复元素
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

struct ListNode* deleteDuplicates(struct ListNode* head){
  //将第一个元素作为新链表的第一个元素
    struct ListNode *p = head,*del;
    while(p != NULL && p->next != NULL){
        if(p->val == p->next->val){
            del = p->next;
            p->next = del->next;
            free(del);
        }else
        {
            p = p->next;
        } 
    }
    return head;
}


// @lc code=end

