#ifndef SEQSTACKLIST_H_INCLUDED
#define SEQSTACKLIST_H_INCLUDED
#include"ElementType.h"
/** ��ʼ��ջ��*/
void Init(SeqStack *seqStack);
/** ��ջ����*/
int InStack(SeqStack *seqStack, chessMan element);
/**  ��ջ���� *��ָ��ķ�ʽ����ջ��Ԫ�أ�����ֵΪ��ջ�Ľ��*/
int OutStack(SeqStack *seqStack, chessMan *element);
/** ���ջ*/
void ClearSeqStack(SeqStack * seqstack);
/** ջ�Ƿ�Ϊ��*/
void IsEmpty(SeqStack * seqstack);


#endif // SEQSTACKLIST_H_INCLUDED
