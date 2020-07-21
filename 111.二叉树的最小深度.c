/*
 * @lc app=leetcode.cn id=111 lang=c
 *
 * [111] 二叉树的最小深度
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

int min(int a,int b){
    return a>b? b:a;
}
int minDepth(struct TreeNode* root){
    if(root == NULL)
        return 0;
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    /////return (left>right? right:left)+1;
    //在评论中看到的很精髓的return：
    //return (left && right) ? 1+min(left,right):1+left+right;
    return (left && right) ? 1+min(left,right):1+left+right;
}


// @lc code=end

