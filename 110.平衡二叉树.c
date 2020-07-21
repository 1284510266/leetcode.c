/*
 * @lc app=leetcode.cn id=110 lang=c
 *
 * [110] 平衡二叉树
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
#include<stdbool.h>
int balance(struct TreeNode* root){
    if(root == NULL)
        return 0;
    int left = balance(root->left);
    int right = balance(root->right);
    if(left == -1 )
        return -1;
    if(right == -1 )
        return -1;
    if(abs(left - right) > 1)
        return -1;
    return (left>right? left:right) + 1;
}

bool isBalanced(struct TreeNode* root){
    return balance(root) != -1;
}
// @lc code=end

