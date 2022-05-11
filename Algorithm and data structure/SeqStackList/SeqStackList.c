#include"SeqStackList.h"

/** 初始化栈表*/
void Init(SeqStack *seqStack){
    seqStack->top = -1;    /*当下标为-1时表示此时数组为空*/
    seqStack->length = 0;
}
/** 进栈操作   插入元素element为新的栈点元素*/
int InStack(SeqStack *seqStack, chessMan element){
   if(seqStack->top == MAX_SIZE - 1 ){                 /*栈满或者异常*/
         printf("满栈，压栈操作失败！\n");
         return 1;
   }
   seqStack->top++;                                             /*若符合条件则栈顶加一*/
   seqStack->data[seqStack->top] = element;    /*将要插入的元素赋值给栈顶*/
   seqStack->length++;
   return 0;
}
/**  出栈操作 *以指针的方式返回栈的元素，返回值为出栈的结果*/
int OutStack(SeqStack *seqStack, chessMan *element){
    if(seqStack->top <= -1){
           printf("空栈，出栈失败！\n");
           return 1;
       }
    *element = seqStack->data[seqStack->top];   //将要删除的栈顶元素赋值给element
     seqStack->top--;                                              //栈顶指针减一
     seqStack->length--;
    return 0;
}
/** 清空栈*/
void ClearSeqStack(SeqStack * seqstack){
      seqstack->top = -1;
      seqstack->length = 0;
}
/** 栈是否为空*/
void IsEmpty(SeqStack * seqstack){
    if(seqstack->top == -1){
        printf("栈为空,空栈\n");
        return;
    }
}
/** 返回栈顶元素*/
void ReTopElement(SeqStack *seqstack, ElementType * element){
        IsEmpty(seqstack);
        *element = seqstack->data[seqstack->top];
}

