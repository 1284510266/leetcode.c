/*
 * @lc app=leetcode.cn id=155 lang=c
 *
 * [155] 最小栈
 */

// @lc code=start



typedef struct {
    int front;
    int rear;
    int val;
} MinStack;

/** initialize your data structure here. */
MinStack* minStackCreate() {
    
    obj->front = 0;
    obj->rear = 0;
    obj->val = 0;
}

void minStackPush(MinStack* obj, int x) {

}

void minStackPop(MinStack* obj) {

}

int minStackTop(MinStack* obj) {

}

int minStackGetMin(MinStack* obj) {

}

void minStackFree(MinStack* obj) {

}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, x);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
// @lc code=end

