/*
 * @lc app=leetcode.cn id=107 lang=c
 *
 * [107] 二叉树的层次遍历 II
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
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include<stdbool.h>
#include<stdio.h>
// struct TreeNode{
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
// };
//构建一个结点类型为树节点的队列
typedef struct queue{
    struct TreeNode* data;
    int front;
    int rear;
}MyQueue;
//初始化
void initqueue(MyQueue* queue,int MAXSIZE){
    queue->data = (struct TreeNode*)malloc(sizeof(struct TreeNode) * MAXSIZE);
    queue->front = 0;
    queue->rear = 0;
}
//入队,从root开始
void enqueue(MyQueue* queue,struct TreeNode* root){
    queue->data[queue->rear++] = root[0];
}
//出队
struct TreeNode* dequeue(MyQueue* queue,struct TreeNode* root){
    return &queue->data[queue->front++];
}
//判断是否为空
bool isempty(MyQueue* queue){
    return queue->front == queue->rear? true:false;
}
//树高
int height(struct TreeNode* root){
    int L_height,R_height;
    int H;
    if(root){
        L_height = height(root->left);
        R_height = height(root->right);
        H = (L_height > R_height)? L_height:R_height;
        return (H+1);
    }else{
        return 0;
    }
}

int** levelOrderBottom(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
    //创建一个二维数组存放结果
    int** result = (int**)malloc((sizeof(int*)) * 1000);
    int i = 0, count = 0 , depth;
    depth = height(root);
    *returnSize = depth; //即返回的二维数组中一维数组的数量（即层数）
    //队列
    MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue)); 
    returnColumnSizes[0] = (int*)malloc(sizeof(int) * 1000);
    initqueue(queue,1000);
    if(!root) return NULL;
    enqueue(queue,root);
    while(!isempty(queue)){
        depth--;
        count = queue->rear - queue->front;
        result[depth] = (int*)malloc(sizeof(int) * count);
        returnColumnSizes[0][depth] = count;
        while(i != count){
            root = dequeue(queue,root);
            result[depth][i++] = root->val;
            if(root->left) enqueue(queue,root->left);
            if(root->right) enqueue(queue,root->right);
        }
        i = 0;
    }
    return result;
}


// @lc code=end

