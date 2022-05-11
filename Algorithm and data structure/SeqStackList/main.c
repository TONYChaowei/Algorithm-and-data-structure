#include"ElementType.h"
#include"SeqStackList.h"
#include"LinkStack.h"
#include"CheckerBoard.h"
ElementType dataArray[] = {
{1,"沙瑞金 汉东省委书记 "},
{3,"高育良 汉东省委副书记兼政法委书记 "},
{12,"祁同伟 汉东省公安厅厅长"},
{2,"汉东省长"}
};
void TestSeqStack();
void TestLinkedStack();
int main()
{
     PrintBoard();
}
void TestSeqStack(){
        SeqStack * seqstack = (SeqStack *)malloc(sizeof(SeqStack));
        chessMan * element = (chessMan *)malloc(sizeof(chessMan));
        Init(seqstack);
        for(int i = 0 ; i < 4; i++){
            InStack(seqstack,dataArray[i]);
            printf("当前入栈：%d\t%s\n",dataArray[i].ID,dataArray[i].name);
        }
        printf("\n\n");
        for(int i = 0; i < 1; i++){
            OutStack(seqstack,element);
            printf("当前出栈：%d\t%s\n",element->ID,element->name);
        }
         printf("\n\n");
        for(int i = 0; i < seqstack->length; i++){
            printf("当前栈内元素:  %d\t%s\n",seqstack->data[i].ID,seqstack->data[i].name);
        }
}
void TestLinkedStack(){
       LinkedStack * linkedStack = (LinkedStack* )malloc(sizeof(LinkedStack));
        chessMan * element = (chessMan *)malloc(sizeof(chessMan));
       linkedStack->length = 0;
    for(int i = 0; i < 4; i++){
        printf("当前进栈的元素为%d\t%s\n",dataArray[i].ID,dataArray[i].name);
        InLinkedStack(linkedStack, dataArray[i]);
     }
     printf("\n\n");
     for(int i = 0; i < 1; i++){
        OutLinkedStack(linkedStack, element);
        printf("从栈里出来的有：%d\t%s\n",element->ID,element->name);
     }
      printf("\n\n");
      printf("栈内元素有：\n");
      for(int i = 0; i < linkedStack->length; i++){
        printf("%d\t%s\n",linkedStack->top->data.ID,linkedStack->top->data.name);
        linkedStack->top = linkedStack->top->next;
      }
}


