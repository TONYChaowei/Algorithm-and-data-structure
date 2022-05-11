#include"CircularLinkList.h"

void InitCircularLinkList(CircularLinkList * circularLinkList, ElementType * dataArray, int length)
{
    for(int i = 0; i < length; i++)
    {
        InsertCircularLinkList(circularLinkList, i + 1, dataArray[i]);
    }
}

/** ��posλ�ò���elementѭ������*/
void  InsertCircularLinkList(CircularLinkList * circularLinkList, int pos, ElementType element)
{
    CirNode * cirNode = (CirNode*)malloc(sizeof(CirNode));    //��Ҫ����Ľ�㸳��ռ�
    cirNode->data = element;
    cirNode->next = NULL;
    CirNode *lastCirNode = NULL;
  if(pos == 1){
      cirNode->next = circularLinkList->next;
       circularLinkList->next = cirNode;
     if( !circularLinkList->next ){/* ��������������Ϊ0*/
         cirNode ->next = cirNode;
     }else{   //������Ȳ�Ϊ0����Ҫ�ҵ���������һ����㲢�ı���ָ����
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
        printf("����Ϊ��! \n");
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
/** ѭ�������ɾ������ ������*/
ElementType DelNode(CircularLinkList * circularLinkList,int pos){
    CirNode * delNode;        //Ҫɾ���Ľ��
    ElementType element;
    if(pos == 1){
        delNode = circularLinkList->next;
          if(delNode){
                element = delNode->data;
                 //�ҵ����Ľ�㲢�ı䷽��
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
    CirNode * currNode  = circularLinkList->next;    //��ǰ�Ľ��
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
/** ����Ԫ�����ݷ��ؽ��ָ��*/
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
/** ͨ�������Ľ�㣬ѭ�����������е�ÿһ��Ԫ��*/
void PrintCircularLinkListBynode(CircularLinkList * circularLinkList, CirNode * node)
{
    if(!node  || !circularLinkList->next){
        printf("������Ϊ�գ�û�����ݿ��Դ�ӡ\n");
        return NULL;
    }
    for(int i = 0; i < circularLinkList->length; i++){
        printf("%d\t%s\n",node->data.id, node->data.name);
        node = node->next;
    }
}
