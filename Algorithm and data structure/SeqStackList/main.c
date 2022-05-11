#include"ElementType.h"
#include"SeqStackList.h"
#include"LinkStack.h"
#include"CheckerBoard.h"
ElementType dataArray[] = {
{1,"ɳ��� ����ʡί��� "},
{3,"������ ����ʡί����Ǽ�����ί��� "},
{12,"��ͬΰ ����ʡ����������"},
{2,"����ʡ��"}
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
            printf("��ǰ��ջ��%d\t%s\n",dataArray[i].ID,dataArray[i].name);
        }
        printf("\n\n");
        for(int i = 0; i < 1; i++){
            OutStack(seqstack,element);
            printf("��ǰ��ջ��%d\t%s\n",element->ID,element->name);
        }
         printf("\n\n");
        for(int i = 0; i < seqstack->length; i++){
            printf("��ǰջ��Ԫ��:  %d\t%s\n",seqstack->data[i].ID,seqstack->data[i].name);
        }
}
void TestLinkedStack(){
       LinkedStack * linkedStack = (LinkedStack* )malloc(sizeof(LinkedStack));
        chessMan * element = (chessMan *)malloc(sizeof(chessMan));
       linkedStack->length = 0;
    for(int i = 0; i < 4; i++){
        printf("��ǰ��ջ��Ԫ��Ϊ%d\t%s\n",dataArray[i].ID,dataArray[i].name);
        InLinkedStack(linkedStack, dataArray[i]);
     }
     printf("\n\n");
     for(int i = 0; i < 1; i++){
        OutLinkedStack(linkedStack, element);
        printf("��ջ��������У�%d\t%s\n",element->ID,element->name);
     }
      printf("\n\n");
      printf("ջ��Ԫ���У�\n");
      for(int i = 0; i < linkedStack->length; i++){
        printf("%d\t%s\n",linkedStack->top->data.ID,linkedStack->top->data.name);
        linkedStack->top = linkedStack->top->next;
      }
}


