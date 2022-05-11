#ifndef CIRCULARLINKLIST_H_INCLUDED
#define CIRCULARLINKLIST_H_INCLUDED
/** ѭ������*/
#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"
typedef int Status;
/** ����ѭ������Ľ��*/
typedef struct CirNode
{
    ElementType data;
    struct CirNode * next;
}CirNode;
/**ѭ�������ͷ�ڵ�*/
typedef struct CircularLinkList
{
    CirNode * next;
    int length;
}CircularLinkList;
/** ��ʼ��ѭ������*/
void InitCircularLinkList(CircularLinkList * circularLinkList, ElementType * dataArray, int length);
/** ��posλ�ò���elementѭ������*/
void InsertCircularLinkList(CircularLinkList * circularLinkList, int pos, ElementType element);
/**��ȡ���һ�����*/
CirNode * GetLastNode(CircularLinkList * circularLinkList);
/** ��ӡѭ������*/
void PrintCircularLinkList(CircularLinkList * circularLinkList);
/** ѭ�������ɾ������*/
ElementType DelNode(CircularLinkList * circularLinkList, int pos);
/** ����Ԫ�����ݷ��ؽ��ָ��*/
CirNode* GetCircularLinkList(CircularLinkList * circularLinkList, ElementType element);
/** ͨ�������Ľ�㣬ѭ�����������е�ÿһ��Ԫ��*/
void PrintCircularLinkListBynode(CircularLinkList * circularLinkList, CirNode * node);

#endif // CIRCULARLINKLIST_H_INCLUDED
