#ifndef STATICSTATELINKLIST_H_INCLUDED
#define STATICSTATELINKLIST_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE  10;
typedef struct ElementType
{
    char *name;
}ElementType;

/** ���Ա�ľ�̬�洢�ṹ  (�ṹ����)*/
typedef struct StaticNode
{
    ElementType data;
    int cur;   //�α�
}StaticLinkList[MAX_SIZE];
/** ��ʼ����̬����*/
void InitList(StaticLinkList space);
/**�������������*/
void InsertElement(StaticLinkList *space, int pos, ElementType element);
/** �����ÿռ�����ǿգ��򷵻ط���Ľ�� ���±꣬���򷵻�0*/
void Malloc_SSL(StaticLinkList space);

#endif // STATICSTATELINKLIST_H_INCLUDED
