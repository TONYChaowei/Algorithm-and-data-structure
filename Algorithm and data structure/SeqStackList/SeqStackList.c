#include"SeqStackList.h"

/** ��ʼ��ջ��*/
void Init(SeqStack *seqStack){
    seqStack->top = -1;    /*���±�Ϊ-1ʱ��ʾ��ʱ����Ϊ��*/
    seqStack->length = 0;
}
/** ��ջ����   ����Ԫ��elementΪ�µ�ջ��Ԫ��*/
int InStack(SeqStack *seqStack, chessMan element){
   if(seqStack->top == MAX_SIZE - 1 ){                 /*ջ�������쳣*/
         printf("��ջ��ѹջ����ʧ�ܣ�\n");
         return 1;
   }
   seqStack->top++;                                             /*������������ջ����һ*/
   seqStack->data[seqStack->top] = element;    /*��Ҫ�����Ԫ�ظ�ֵ��ջ��*/
   seqStack->length++;
   return 0;
}
/**  ��ջ���� *��ָ��ķ�ʽ����ջ��Ԫ�أ�����ֵΪ��ջ�Ľ��*/
int OutStack(SeqStack *seqStack, chessMan *element){
    if(seqStack->top <= -1){
           printf("��ջ����ջʧ�ܣ�\n");
           return 1;
       }
    *element = seqStack->data[seqStack->top];   //��Ҫɾ����ջ��Ԫ�ظ�ֵ��element
     seqStack->top--;                                              //ջ��ָ���һ
     seqStack->length--;
    return 0;
}
/** ���ջ*/
void ClearSeqStack(SeqStack * seqstack){
      seqstack->top = -1;
      seqstack->length = 0;
}
/** ջ�Ƿ�Ϊ��*/
void IsEmpty(SeqStack * seqstack){
    if(seqstack->top == -1){
        printf("ջΪ��,��ջ\n");
        return;
    }
}
/** ����ջ��Ԫ��*/
void ReTopElement(SeqStack *seqstack, ElementType * element){
        IsEmpty(seqstack);
        *element = seqstack->data[seqstack->top];
}

