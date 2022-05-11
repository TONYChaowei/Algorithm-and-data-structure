#include"LinkStack.h"

/**入栈操作*/
int InLinkedStack(LinkedStack *linkedStack,chessMan element){

      /**链栈的不用判断是否栈满，内存大小决定它的存储空间*/
      StackNode * tempNode = (StackNode*)malloc(sizeof(StackNode));   //声明临时结点指针，并赋给一个空间
      tempNode->data = element;    //插入值
      tempNode->next = linkedStack->top;  //新插入的结点的指针指向当前的栈顶
      linkedStack->top = tempNode;
      linkedStack->length++;
      return 0;
}
/**出栈操作 并用指针返回出栈的结果*/
int OutLinkedStack(LinkedStack *linkedStack,chessMan *element){
       StackNode * delNode = NULL;
       //StackNode * currNode = linkedStack->top;
       if(linkedStack->length == 0){
               printf("出栈失败，当前为空栈！\n");
               return 1;
       }
       delNode = linkedStack->top;
       *element = delNode->data;
       linkedStack->top = delNode->next;
       linkedStack->length--;
        free(delNode);
}
/**清空栈*/
void ClearLinkedStack(LinkedStack *linkedStack){
      StackNode *tempNode;
      while(linkedStack->top){
             tempNode = linkedStack->top;
             linkedStack->top = linkedStack->top->next;         //栈顶指向下一个元素
             linkedStack->length--;
             free(tempNode);
      }
}
/**摧毁栈*/
void DestroyLinkedStack(LinkedStack *linkedStack){
      ClearLinkedStack(linkedStack);
      free(linkedStack);
       linkedStack = NULL;
}
