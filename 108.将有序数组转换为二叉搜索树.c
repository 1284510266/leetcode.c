/*
 * @lc app=leetcode.cn id=108 lang=c
 *
 * [108] 将有序数组转换为二叉搜索树
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

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    int mid = 0;
    struct TreeNode* root = NULL;
    root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if(nums == NULL || numsSize == 0) return NULL;

    mid = numsSize/2;
    root->val = nums[mid];
    root->left = sortedArrayToBST(&nums[0],mid);
    root->right = sortedArrayToBST(&nums[mid+1],numsSize-1-mid);
    return root;
}


// @lc code=end

