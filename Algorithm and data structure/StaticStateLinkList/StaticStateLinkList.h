#ifndef STATICSTATELINKLIST_H_INCLUDED
#define STATICSTATELINKLIST_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE  10;
typedef struct ElementType
{
    char *name;
}ElementType;

/** 线性表的静态存储结构  (结构数组)*/
typedef struct StaticNode
{
    ElementType data;
    int cur;   //游标
}StaticLinkList[MAX_SIZE];
/** 初始化静态链表*/
void InitList(StaticLinkList space);
/**插入链表的数据*/
void InsertElement(StaticLinkList *space, int pos, ElementType element);
/** 若备用空间链表非空，则返回分配的结点 的下标，否则返回0*/
void Malloc_SSL(StaticLinkList space);

#endif // STATICSTATELINKLIST_H_INCLUDED
