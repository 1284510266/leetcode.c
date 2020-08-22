/*
 * @lc app=leetcode.cn id=217 lang=c
 *
 * [217] 存在重复元素
 */

// @lc code=start

// #include<stdio.h>
// #include<stdbool.h>

// //该函数的用处是检查除去限定长度的数组（从尾部开始）是否存在与数组尾部边缘元素相同的元素。
// bool search(int *nums,int size,int number){
//     int i;
//     bool init = false;
//     for(i = 0;i < size;i++){
//         if(nums[i] == number){
//             init =true;
//             break;
//         }
//     }
//     return init;
// }
// bool containsDuplicate(int* nums, int numsSize){
//     bool ret = false;
//     int j = numsSize - 1,k;
//     while((!ret) && (j >= 0)){
//         ret = search(nums,j,nums[j]);
//         if(ret)
//             break;
//         j--;
//     }   
//     return ret;
// }
//上述的方法会导致超时，最后有一个长的离谱的数组。
#define HashSize 20000

struct LinkNode{
    int info;
    struct LinkNode *next;
};

struct LinkNode** CreatHash(int n){
    struct LinkNode **a;
    a = (struct LinkNode**)malloc(sizeof(struct LinkNode*) * n);
    for(int i = 0; i < n; i ++) a[i] = NULL;
    return(a);
}

bool SearchHash(struct LinkNode **table, int x, int n){
    int index = (x % n) >= 0 ? (x % n) : ((x % n) + n);
    struct LinkNode *p;
    p = table[index];

    while(p != NULL){
        if(p->info == x) return true;
        p = p->next;
    }
    return false;
}

void PutHash(struct LinkNode **table, int x, int n){
    int index = (x % n) >= 0 ? (x % n) : ((x % n) + n);

    if(SearchHash(table, x, n) == true) return;

    struct LinkNode *p, *q;
    q = (struct LinkNode*)malloc(sizeof(struct LinkNode));
    q->info = x; q->next = NULL;

    p = table[index];
    if(p == NULL){table[index] = q; return;}
    while(p->next != NULL) p = p->next;
    p->next = q;
}

void DelHash(struct LinkNode **table, int x, int n){
    int index = (x % n) >= 0 ? (x % n) : ((x % n) + n);

    if(SearchHash(table, x, n) == false) return;

    struct LinkNode *p, *q;
    p = table[index];
    while(p->info != x) p = p->next;
    q = p; p = p->next; free(q);
}

bool containsDuplicate(int* nums, int numsSize){
    if(numsSize < 2) return false;

    struct LinkNode **table;
    table = CreatHash(HashSize);

    for(int i = 0; i < numsSize; i ++){
        if(SearchHash(table, nums[i], HashSize) == true) return true;
        PutHash(table, nums[i], HashSize);
    }


    return false;
}

// @lc code=end

