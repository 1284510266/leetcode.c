/*
 * @lc app=leetcode.cn id=112 lang=c
 *
 * [112] 路径总和
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
#include<stdio.h>
#include<stdbool.h>

bool hasPathSum(struct TreeNode* root, int sum){
    //----------今天就用递归了，则原题可简化为左子树 根节点 右子树，方法如下-----
    //----------先判断左右子树是否为空，因为题目要求是到叶子节点的路径-----------
    //--若不为空，则继续将左右两个子树递归，修改root和sum即可-------------------
    if(root == NULL)
        return false;
    if(root->left == NULL && root->right == NULL)
        return (sum == root->val); //即把根节点当作叶子节点
    //判断完 几种空的情况后，就要判断后续子树
    return (hasPathSum(root->left,sum - root->val) || hasPathSum(root->right,sum - root->val));

}


// @lc code=end

