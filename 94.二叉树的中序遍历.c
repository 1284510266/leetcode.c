/*
 * @lc app=leetcode.cn id=94 lang=c
 *
 * [94] 二叉树的中序遍历
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


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize){
    //左子树 根 右子树  给的二叉树是先序的
    struct TreeNode* stack[1000] = {0};//数组表示顺序栈，结点类型为树节点
    int* nums = (int*)malloc(sizeof(int)*1000);
    int p = -1,index = 0;

    while(root != NULL || p != -1){ //一开始用的是&& 在[1,null,2,3] 一直无法通过
        //root = NULL 则表示搜索到了叶子结点
        while(root != NULL){
            stack[++p] = root;
            root = root->left;
        }
        //中序遍历是从左子树的叶子节点输出的，符合栈的特性：先入后出
        if(p != -1){
            root = stack[p--];
            nums[index++] = root->val;
            root = root->right;
        }
    }

    *returnSize = index;
    return nums;
}


// @lc code=end

