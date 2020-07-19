/*
 * @lc app=leetcode.cn id=101 lang=c
 *
 * [101] 对称二叉树
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
// bool f(struct TreeNode *p,struct TreeNode *q)
// {
//     if(p==NULL&&q==NULL)
//     return true;
//     else if(p==NULL||q==NULL||p->val!=q->val)
//     return false;
//     else
//     return f(p->left,q->right)&&f(p->right,q->left);
// }



bool f(struct TreeNode* p,struct TreeNode* q){
    if(p == NULL && q == NULL)
        return true;
    else if(p==NULL || q==NULL || q->val != p->val)
            return false;
        else
            return (f(p->left,q->right)&&f(p->right,q->left));
}

bool isSymmetric(struct TreeNode* root){
    if(root == NULL) 
        return true;
    else 
        return f(root->left,root->right);
     
}


// @lc code=end

