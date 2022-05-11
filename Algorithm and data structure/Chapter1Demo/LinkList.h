#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
/**
    * ����
    * ����ĳ����������͵Ķ��弰ʵ��
    * ÿ����㶼�к������
*/
#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"
typedef struct Node{
  ElementType data;     //������
  struct Node * next;    //ָ����
}Node;
/**ͷ���
*  ע�⣺�����ڶ��������ʱ��ϰ���ԵĻᶨ��ͷ��㣬�Ա�ͳһ������Ĳ����ɾ������
*/
typedef struct LinkList{
  Node * next;        ///ͷָ�루���������ͷ��㣬next��ָ��ͷ��㣻û�о�ָ���һ�����
  int length;           //����ĳ��ȣ���ʼֵΪ0
}LinkList;
/** ��ʼ������*/
void InitLinkList(LinkList * linkList, ElementType * dataArray, int length);
/** ��ָ����pos��ַ����elementԪ��*/
void InsertLinkList(LinkList * linkList, int pos, ElementType element );
/** ��ӡ����*/
void PrintLinkList(LinkList * linkList);
int IsLinkListEmpty(LinkList * linkList);
/** ����posλ�õ�Ԫ�� */
ElementType GetLinkListElement(LinkList * linkList, int pos);
/** ɾ�������е�Ԫ��*/
ElementType DeleteLinkListElement(LinkList * linkList, int pos);
/** �������*/
void ClearLinkList(LinkList * linkList);
#endif // LINKLIST_H_INCLUDED
