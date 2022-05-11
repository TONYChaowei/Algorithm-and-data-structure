#include"StaticStateLinkList.h"
/** 初始化静态链表*/
void InitList(StaticLinkList space){
    for(int i = 0; i < MAX_SIZE - 1; i++){
        space[i].cur = i + 1;
        space[MAX_SIZE - 1].cur = 0;   /*当静态链表为空时，最后的一个元素的cur为0*/
    }
}
/** 若备用空间链表非空，则返回分配的结点 的下标，否则返回0*/
void Malloc_SSL(StaticLinkList space){
    int i;
    i = space[0].cur;
    if(space[0].cur){
        space[0].cur = space[i],cur;
    }
    return i;
}
/**插入链表的数据*/
void InsertElement(StaticLinkList space, int pos, ElementType element){
        int insertNodeIndex;
        int lastNodeIndex;
        int currNodeIndex;

}
