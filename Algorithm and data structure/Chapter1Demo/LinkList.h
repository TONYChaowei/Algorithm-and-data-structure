#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
/**
    * 链表
    * 链表的抽象数据类型的定义及实现
    * 每个结点都有后续结点
*/
#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"
typedef struct Node{
  ElementType data;     //数据域
  struct Node * next;    //指针域
}Node;
/**头结点
*  注意：我们在定义链表的时候，习惯性的会定义头结点，以便统一链表结点的插入和删除操作
*/
typedef struct LinkList{
  Node * next;        ///头指针（如果链表有头结点，next就指向头结点；没有就指向第一个结点
  int length;           //链表的长度，初始值为0
}LinkList;
/** 初始化链表*/
void InitLinkList(LinkList * linkList, ElementType * dataArray, int length);
/** 在指定的pos地址插入element元素*/
void InsertLinkList(LinkList * linkList, int pos, ElementType element );
/** 打印链表*/
void PrintLinkList(LinkList * linkList);
int IsLinkListEmpty(LinkList * linkList);
/** 返回pos位置的元素 */
ElementType GetLinkListElement(LinkList * linkList, int pos);
/** 删除链表中的元素*/
ElementType DeleteLinkListElement(LinkList * linkList, int pos);
/** 清空链表*/
void ClearLinkList(LinkList * linkList);
#endif // LINKLIST_H_INCLUDED
