/*
 * @lc app=leetcode.cn id=104 lang=c
 *
 * [104] 二叉树的最大深度
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

//DFS ：深度优先
//思路：要求树深度，就取左右树的深度最大值，
int maxDepth(struct TreeNode* root){
    if(root == NULL)
        return 0;
    
    int left = maxDepth(root->left) + 1;   // +1 是加根节点
    int right = maxDepth(root->right) + 1;
    return left>right? left:right;
}


// @lc code=end

