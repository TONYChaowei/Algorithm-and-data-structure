#include"LinkStack.h"

/**��ջ����*/
int InLinkedStack(LinkedStack *linkedStack,chessMan element){

      /**��ջ�Ĳ����ж��Ƿ�ջ�����ڴ��С�������Ĵ洢�ռ�*/
      StackNode * tempNode = (StackNode*)malloc(sizeof(StackNode));   //������ʱ���ָ�룬������һ���ռ�
      tempNode->data = element;    //����ֵ
      tempNode->next = linkedStack->top;  //�²���Ľ���ָ��ָ��ǰ��ջ��
      linkedStack->top = tempNode;
      linkedStack->length++;
      return 0;
}
/**��ջ���� ����ָ�뷵�س�ջ�Ľ��*/
int OutLinkedStack(LinkedStack *linkedStack,chessMan *element){
       StackNode * delNode = NULL;
       //StackNode * currNode = linkedStack->top;
       if(linkedStack->length == 0){
               printf("��ջʧ�ܣ���ǰΪ��ջ��\n");
               return 1;
       }
       delNode = linkedStack->top;
       *element = delNode->data;
       linkedStack->top = delNode->next;
       linkedStack->length--;
        free(delNode);
}
/**���ջ*/
void ClearLinkedStack(LinkedStack *linkedStack){
      StackNode *tempNode;
      while(linkedStack->top){
             tempNode = linkedStack->top;
             linkedStack->top = linkedStack->top->next;         //ջ��ָ����һ��Ԫ��
             linkedStack->length--;
             free(tempNode);
      }
}
/**�ݻ�ջ*/
void DestroyLinkedStack(LinkedStack *linkedStack){
      ClearLinkedStack(linkedStack);
      free(linkedStack);
       linkedStack = NULL;
}
