#ifndef SEQLIST_H_INCLUDED
#define SEQLIST_H_INCLUDED
/*
����˳���
*/
#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"
/**
* ��ʼ��˳���
* seqList  Ҫ��ʼ����˳���
* elemArary  ��ʼ��Ҫ��ӵ�Ԫ����������
* length ��ʼ����ӵ�Ԫ�ظ���
*/
void InitList(SeqList * seqList, ElementType * elemArray, int length);

/**
* ��˳����е�index�±괦����ĳ��Ԫ��
* seqList
* index    Ҫ������±�
* element  Ҫ�����Ԫ��
*/
void InsertElement(SeqList * seqList , int index  , ElementType element);
void PrintList(SeqList * seqList);
/**
* ɾ��˳�����ָ�����±�Ԫ��
* seqList  Ҫ������˳���
*  index  Ҫɾ�����±�
*  return ����ɾ����Ԫ�أ����ɾ��ʧ�ܣ�����NULL
*/
ElementType * DeleteElement(SeqList * seqList, int index);
/**
* ����˳�����ָ�����±�Ԫ��
* seqList  Ҫ������˳���
*  index  Ҫ���ص�Ԫ�ص��±�
*  return ����ָ���±��Ԫ�أ��������ʧ�ܣ�����NULL
*/
ElementType * GetElement(SeqList * seqList, int index);
#endif // SEQLIST_H_INCLUDED
