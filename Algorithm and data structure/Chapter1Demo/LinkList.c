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
    //1.创造空结点并为数据域赋值
     Node * node = (Node * )malloc(sizeof(Node));
     node -> data = element;
     node ->next = NULL;
    //2.找到要插入位置的结点
     if(pos == 1)
     {   //如果插入的是第一个元素，那么就非常简单啦
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
     //3. 将结点插入并对接前面的结点
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
        printf("链表为空！\n");
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
/**返回pos位置的元素 */
ElementType GetLinkListElement(LinkList * linkList, int pos)
{
    Node * node = linkList->next;
     for(int  i = 1; node&& i < pos; i++)
    {
        node = node->next;
    }
    return node->data;
}
/** 删除链表中的元素*/
ElementType DeleteLinkListElement(LinkList * linkList, int pos)
{
    ElementType element;   //要被删除的元素
    element.id = -9999;      //先赋一个初值
    Node * node = NULL;
     Node * delNode = NULL;
    if(pos == 1)
    {
        node = linkList->next;
        if(node)
        {
            element = node->data;
            linkList->next = node->next;
            free(node);      //释放结点
            linkList->length--;
        }
        return element;
    }
    //1.找到删除结点和它的前缀结点
    //2.要删除的结点->next赋值给前缀结点->next
    //3.释放删除的结点内存
    node = linkList->next;
    for(int i = 1;  linkList &&i < pos - 1; i++)
    {
        node = node->next;
    }
    //此处node为前缀结点
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
/** 清空链表*/
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
