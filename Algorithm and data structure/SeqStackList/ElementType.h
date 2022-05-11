#ifndef ELEMENTTYPE_H_INCLUDED
#define ELEMENTTYPE_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 4
typedef struct ElementType       /*��˳��ջ�д������Ԫ������*/
{
    int ID;
    char *name;
}ElementType;
typedef struct
{
    int X;        //��ǰ���ӵ�x y������
    int Y;
    int type;    //��ǰ��������
}chessMan;

/** ����ջ��˳��洢��ʽ*/
typedef struct
{
     chessMan data[MAX_SIZE];
     int top;                                   /* ջ��������Ԫ�ص��±꣩�����Ϊ-1��֤��ջΪ��*/
     int  length;
}SeqStack;



#endif // ELEMENTTYPE_H_INCLUDED
