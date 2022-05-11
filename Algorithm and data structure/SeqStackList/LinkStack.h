#ifndef LINKSTACK_H_INCLUDED
#define LINKSTACK_H_INCLUDED
#include"ElementType.h"
/** 链式存储结构*/
/** 结点*/
typedef  struct StackNode{
     chessMan data;
     struct StackNode * next;
}StackNode;

/** 链式结构*/
typedef struct {
    StackNode * top;
     int length;
}LinkedStack;
void InitStack(LinkedStack *linkedStack);
/**入栈操作*/
int InLinkedStack(LinkedStack *linkedStack,chessMan element);
/**出栈操作*/
int OutLinkedStack(LinkedStack *linkedStack,chessMan *element);
/**清空栈*/
void ClearLinkedStack(LinkedStack *linkedStack);
/**摧毁栈*/
void DestroyLinkedStack(LinkedStack *linkedStack);
#endif // LINKSTACK_H_INCLUDED
