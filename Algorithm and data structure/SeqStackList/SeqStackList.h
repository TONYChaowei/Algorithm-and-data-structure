#ifndef SEQSTACKLIST_H_INCLUDED
#define SEQSTACKLIST_H_INCLUDED
#include"ElementType.h"
/** 初始化栈表*/
void Init(SeqStack *seqStack);
/** 进栈操作*/
int InStack(SeqStack *seqStack, chessMan element);
/**  出栈操作 *以指针的方式返回栈的元素，返回值为出栈的结果*/
int OutStack(SeqStack *seqStack, chessMan *element);
/** 清空栈*/
void ClearSeqStack(SeqStack * seqstack);
/** 栈是否为空*/
void IsEmpty(SeqStack * seqstack);


#endif // SEQSTACKLIST_H_INCLUDED
