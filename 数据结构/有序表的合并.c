#include<stdio.h>
typedef struct 
{
    int *elem;
    int length;
}SqList;
//输入La，Lb两个表，用Lc表存储
void MergeList_Sq(SqList La,SqList Lb,SqList Lc){
    //指针定义
    int *pc,*pa,*pb;
    int *pa_last,*pb_last;
    //初始化Lc表,La,Lb表
    Lc.length=La.length+Lb.length;
    Lc.elem = (int*)malloc(Lc.length*sizeof(int));
    pc = Lc.elem; //elem表示元素，pc指针指向c表的第一个元素，存储地址,Lc.elem相当于数组
    pa = La.elem;  pb = Lb.elem;
    pa_last = La.elem + La.length - 1;
    pb_last = Lb.elem + Lb.length - 1;

    //开始合并
    while((pa < pa_last) && (pb < pb_last)){ //两表都未到达末尾
        //由于都是顺序表，故只需比较同一位置元素的大小
        if(*pa <= *pb) *pc++=*pa++; //第一个位置存储pa值，pc和pa都指向下一个位置
        else *pc++ = *pb++;
    }
    //以上插完值之后，若La.length != Lb.length则必有一个表多余
    while (pa <= pa_last)
    {
        *pc++ = *pa++;
    }
    while (pb <= pb_last)
    {
        *pc++ = *pb++;
    }
    //注意链表和顺序表的不同
    //链表的下一个位置是 p->next= 是链式存储 ，而顺序表是类数组，直接随机访问 *p++    
    //空间上，顺序表的方式需要重新开辟一个连续的空间，而链式表不需要开辟新的空间
}



