#ifndef LINKSTACK_H_INCLUDED
#define LINKSTACK_H_INCLUDED
#include"ElementType.h"
/** ��ʽ�洢�ṹ*/
/** ���*/
typedef  struct StackNode{
     chessMan data;
     struct StackNode * next;
}StackNode;

/** ��ʽ�ṹ*/
typedef struct {
    StackNode * top;
     int length;
}LinkedStack;
void InitStack(LinkedStack *linkedStack);
/**��ջ����*/
int InLinkedStack(LinkedStack *linkedStack,chessMan element);
/**��ջ����*/
int OutLinkedStack(LinkedStack *linkedStack,chessMan *element);
/**���ջ*/
void ClearLinkedStack(LinkedStack *linkedStack);
/**�ݻ�ջ*/
void DestroyLinkedStack(LinkedStack *linkedStack);
#endif // LINKSTACK_H_INCLUDED
