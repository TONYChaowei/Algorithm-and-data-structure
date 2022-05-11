#ifndef CIRCULARLINKLIST_H_INCLUDED
#define CIRCULARLINKLIST_H_INCLUDED
/** 循环链表*/
#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"
typedef int Status;
/** 定义循环链表的结点*/
typedef struct CirNode
{
    ElementType data;
    struct CirNode * next;
}CirNode;
/**循环链表的头节点*/
typedef struct CircularLinkList
{
    CirNode * next;
    int length;
}CircularLinkList;
/** 初始化循环链表*/
void InitCircularLinkList(CircularLinkList * circularLinkList, ElementType * dataArray, int length);
/** 在pos位置插入element循环链表*/
void InsertCircularLinkList(CircularLinkList * circularLinkList, int pos, ElementType element);
/**获取最后一个结点*/
CirNode * GetLastNode(CircularLinkList * circularLinkList);
/** 打印循环链表*/
void PrintCircularLinkList(CircularLinkList * circularLinkList);
/** 循环链表的删除操作*/
ElementType DelNode(CircularLinkList * circularLinkList, int pos);
/** 根据元素内容返回结点指针*/
CirNode* GetCircularLinkList(CircularLinkList * circularLinkList, ElementType element);
/** 通过给定的结点，循环遍历链表中的每一个元素*/
void PrintCircularLinkListBynode(CircularLinkList * circularLinkList, CirNode * node);

#endif // CIRCULARLINKLIST_H_INCLUDED
