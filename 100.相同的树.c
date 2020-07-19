/*
 * @lc app=leetcode.cn id=100 lang=c
 *
 * [100] 相同的树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

#include<stdbool.h>
bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    //思想就是遍历树，然后比较
    if(p==NULL && q==NULL) return true;
    if(p==NULL || q==NULL) return false;
    if(p->val != q->val) return false;
    return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
}


// @lc code=end

