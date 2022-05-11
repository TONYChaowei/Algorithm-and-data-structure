#include"CircularLinkList.h"

void InitCircularLinkList(CircularLinkList * circularLinkList, ElementType * dataArray, int length)
{
    for(int i = 0; i < length; i++)
    {
        InsertCircularLinkList(circularLinkList, i + 1, dataArray[i]);
    }
}

/** 在pos位置插入element循环链表*/
void  InsertCircularLinkList(CircularLinkList * circularLinkList, int pos, ElementType element)
{
    CirNode * cirNode = (CirNode*)malloc(sizeof(CirNode));    //给要插入的结点赋予空间
    cirNode->data = element;
    cirNode->next = NULL;
    CirNode *lastCirNode = NULL;
  if(pos == 1){
      cirNode->next = circularLinkList->next;
       circularLinkList->next = cirNode;
     if( !circularLinkList->next ){/* 如果插入的链表长度为0*/
         cirNode ->next = cirNode;
     }else{   //如果长度不为0，就要找到链表的最后一个结点并改变其指针域
             lastCirNode = circularLinkList->next;
             for(int i = 0; i < circularLinkList->length; i++){
                lastCirNode = lastCirNode->next;
             }
             lastCirNode->next = cirNode;
             circularLinkList->length++;
             return;  }
 }
 CirNode * currCirNode = circularLinkList->next;
 for(int i = 1; currCirNode && i < pos - 1; i++)
 {
     currCirNode = currCirNode->next;
 }
 if(currCirNode){
     cirNode->next = currCirNode->next;
     currCirNode->next = cirNode;
     circularLinkList->length++;
     if(pos == circularLinkList->length){
         cirNode->next = circularLinkList->next;
     }
  }
}
void PrintCircularLinkList(CircularLinkList * circularLinkList)
{
    if( circularLinkList->length == 0 || ! circularLinkList->next){
        printf("链表为空! \n");
        circularLinkList->length = 0;
        return;
    }
     CirNode * cirNode = circularLinkList->next;
    for(int i = 0; i < circularLinkList->length ; i++){
          printf("ID: %d\t%s\n",cirNode->data.id,cirNode->data.name);
          cirNode = cirNode->next;
    }
    printf("\n");
}
/** 循环链表的删除操作 并返回*/
ElementType DelNode(CircularLinkList * circularLinkList,int pos){
    CirNode * delNode;        //要删除的结点
    ElementType element;
    if(pos == 1){
        delNode = circularLinkList->next;
          if(delNode){
                element = delNode->data;
                 //找到最后的结点并改变方向
                 CirNode *lastNode = circularLinkList->next;
                 for(int i = 1; i < circularLinkList->length;i++){
                    lastNode = lastNode->next;
                 }
                 circularLinkList->next = delNode->next;
                 lastNode->next = circularLinkList->next;
                free(delNode);
                circularLinkList->length--;
          }
           return;
    }
    CirNode * currNode  = circularLinkList->next;    //当前的结点
    for(int i = 1; i < pos - 1;i++){
        currNode = currNode->next;
    }
     if(currNode){
        delNode = currNode->next;
        element = delNode->data;
        currNode->next = delNode->next;
        free(delNode);
        circularLinkList->length--;
     }

    return element;
}
/** 根据元素内容返回结点指针*/
CirNode* GetCircularLinkList(CircularLinkList * circularLinkList, ElementType element)
{
     CirNode *node = circularLinkList->next;
     if(!node) return NULL;
        do{
         //printf("%d\t%s\n",node->data.id, node->data.name);
         if(element.id == node->data.id && element.name == node->data.name){
             return node;
            }  node = node->next;
      } while(node != circularLinkList->next);
      return NULL;
}
/** 通过给定的结点，循环遍历链表中的每一个元素*/
void PrintCircularLinkListBynode(CircularLinkList * circularLinkList, CirNode * node)
{
    if(!node  || !circularLinkList->next){
        printf("链表长度为空，没有内容可以打印\n");
        return NULL;
    }
    for(int i = 0; i < circularLinkList->length; i++){
        printf("%d\t%s\n",node->data.id, node->data.name);
        node = node->next;
    }
}
