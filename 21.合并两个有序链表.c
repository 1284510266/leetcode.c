/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* ret = NULL;
    struct ListNode* p1 = l1;
    struct ListNode* p2 = l2;
    if (p1 && p2) {
        if (p1->val <= p2->val) {
            p = p1;
            p1 = p1->next;
        } else {
            p = p2;
            p2 = p2->next;
        }
        ret = p;            
    } else if (p2 == NULL) {
        return p1;
    } else if (p1 == NULL) {
        return p2;
    }

    while(p1 && p2) {
        if (p1->val <= p2->val) {
            p->next = p1;
            p = p1;
            p1 = p1->next;
        } else {
            p->next = p2;
            p = p2;
            p2 = p2->next;
        }
    }
    p->next = p1 ? p1 : p2;
    return ret;
}

// @lc code=end

