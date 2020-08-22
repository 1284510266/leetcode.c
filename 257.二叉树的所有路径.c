/*
 * @lc app=leetcode.cn id=257 lang=c
 *
 * [257] 二叉树的所有路径
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
#include<stdio.h>
#include<stdbool.h>

// struct TreeNode{
//     int val;
//     struct TreeNode *left;
//     struct TreeNOde *right;
// };
void def(char **path,char *temp,struct TreeNode *root,int cnt,int *size){
    if(root == NULL)
        return;
    //注意这里的cnt在输入时已经初始化过了
    temp[cnt++] = root->val;//初始化，这里的cnt在第一次进入时即根节点，cnt=0；
    //sprint函数的用法
    //发送格式化输出到 str 所指向的字符串
    if(root->left == NULL && root->right == NULL){
        //已在主函数开辟空间 char path[*size] = (char*)malloc(sizeof(char)*1000);
        //如果成功，则返回写入的字符总数，不包括字符串追加在字符串末尾的空字符。如果失败，则返回一个负数。
        int len = 0;
        for(int i = 0;i < cnt - 1;i++){
            len += sprintf(&path[*size][len],"%d->",temp[i]);
        }
        sprintf(&path[*size][len],"%d",temp[cnt-1]);
        *size += 1;
        return;
    }
    //如果有空子树的情况，则该子树的root==NULL，则只会return；
    def(path,temp,root->left,cnt,size);
    def(path,temp,root->right,cnt,size);
    return;
}
char ** binaryTreePaths(struct TreeNode* root, int* returnSize){
    //返回一个字符串数组
    char **ret = (char**)malloc(sizeof(char*) * 100);
    for(int i = 0;i < 100;i++){
        ret[i] = (char*)malloc(sizeof(char) * 100);
    }
    char temp[100];
    int cnt = 0;
    int size = 0;
    def(ret,temp,root,cnt,&size);
    *returnSize = size;
    return ret;
}


// @lc code=end

