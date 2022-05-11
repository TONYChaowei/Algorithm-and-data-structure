#include"LinkList.h"
void InitLinkList(LinkList * linkList, ElementType * dataArray, int length)
{
    for(int i = 0; i < length; i++)
    {
        InsertLinkList(linkList, i + 1, dataArray[i]);
    }
}
void InsertLinkList(LinkList * linkList, int pos, ElementType element )
{
    //1.����ս�㲢Ϊ������ֵ
     Node * node = (Node * )malloc(sizeof(Node));
     node -> data = element;
     node ->next = NULL;
    //2.�ҵ�Ҫ����λ�õĽ��
     if(pos == 1)
     {   //���������ǵ�һ��Ԫ�أ���ô�ͷǳ�����
            node->next=  linkList->next;
             linkList->next = node;
             linkList->length++;
             return;
     }
     Node * currNode = linkList->next;
     for(int i = 1;currNode && i < pos - 1;i++)
     {
           currNode = currNode->next;
     }
     //3. �������벢�Խ�ǰ��Ľ��
     if(currNode){
          node->next = currNode->next;
          currNode->next =  node;
           linkList->length++;
     }
}
void PrintLinkList(LinkList * linkList)
{
    Node * node = linkList->next;
    if(!node)
    {
        printf("����Ϊ�գ�\n");
        linkList->length = 0;
        return;
    }
    for(int i = 0; i < linkList->length; i++)
    {
          printf("ID: %d\t%s\n",node->data.id,node->data.name);
          node = node->next;
    }
    printf("\n");
}
int IsLinkListEmpty(LinkList * linkList)
{
    return linkList->length ==0 ? TURE : FALSE;
}
/**����posλ�õ�Ԫ�� */
ElementType GetLinkListElement(LinkList * linkList, int pos)
{
    Node * node = linkList->next;
     for(int  i = 1; node&& i < pos; i++)
    {
        node = node->next;
    }
    return node->data;
}
/** ɾ�������е�Ԫ��*/
ElementType DeleteLinkListElement(LinkList * linkList, int pos)
{
    ElementType element;   //Ҫ��ɾ����Ԫ��
    element.id = -9999;      //�ȸ�һ����ֵ
    Node * node = NULL;
     Node * delNode = NULL;
    if(pos == 1)
    {
        node = linkList->next;
        if(node)
        {
            element = node->data;
            linkList->next = node->next;
            free(node);      //�ͷŽ��
            linkList->length--;
        }
        return element;
    }
    //1.�ҵ�ɾ����������ǰ׺���
    //2.Ҫɾ���Ľ��->next��ֵ��ǰ׺���->next
    //3.�ͷ�ɾ���Ľ���ڴ�
    node = linkList->next;
    for(int i = 1;  linkList &&i < pos - 1; i++)
    {
        node = node->next;
    }
    //�˴�nodeΪǰ׺���
   if(node)
   {
         delNode =  node->next;
         element = delNode->data;
         node->next = delNode->next;
         free(delNode);
         linkList->length--;
   }
   return element;
}
/** �������*/
void ClearLinkList(LinkList * linkList)
{
     Node * node;
     Node * nextNode;
       node  = linkList->next;
       while(node)
       {
           nextNode = node->next;
           free(node);
           node = nextNode;
       }
       linkList->next = NULL;
       linkList->length = 0;
}
