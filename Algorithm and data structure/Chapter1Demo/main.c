#include "DataElement.h"
#include"SeqList.h"
#include"LinkList.h"
#include<windows.h>
#include"CircularLinkList.h"
ElementType dataArray[] = {
{1,"沙瑞金 汉东省委书记 "},
{3,"高育良 汉东省委副书记兼政法委书记 "},
{12,"祁同伟 汉东省公安厅厅长"},
{2,"汉东省长"}
};
/** 测试函数*/
void TestSequenceList();
void TestLinklist();
void TestCircularLinkList();

int main()
{
    //TestSequenceList();
     //TestLinklist();
     TestCircularLinkList();

    return 0;
}
void TestSequenceList()
{
    SeqList seqList;     //要操作的顺序表
    ElementType * delElement;
    InitList(&seqList,&dataArray[0],sizeof(dataArray) / sizeof(dataArray[0]) + 1);
     printf("初始化后\n");
    PrintList(&seqList);
    printf("\n删除后\n");
    delElement = DeleteElement(&seqList,2);
    PrintList(&seqList);
    printf("\n被删除的元素为\n");
    printf("%d\t%s\n",delElement->id,delElement->name);
    free(delElement);
}
void TestLinklist()
{
    LinkList linkList;
    linkList.length = 0;
    InitLinkList(&linkList, &dataArray[0], sizeof(dataArray) / sizeof(dataArray[0]));
    PrintLinkList(&linkList);
    ElementType element;
    element.id = 1212;
    element.name = (char * )malloc(10);
    element.name = "test";
    InsertLinkList(&linkList, 1, element);
    printf("插入后\n");
    PrintLinkList(&linkList);
    printf("删除链表第三个元素\n");
    DeleteLinkListElement(&linkList, 3);
    PrintLinkList(&linkList);
    printf("清除链表后\n");
    ClearLinkList(&linkList);
    PrintLinkList(&linkList);
}
void TestCircularLinkList()
{
    ElementType element;
    ElementType delElement;
    CirNode *node;
    CircularLinkList * circularLinkList = (CircularLinkList* )malloc(sizeof(CircularLinkList));
    circularLinkList->length = 0;
    circularLinkList->next = NULL;
    InitCircularLinkList(circularLinkList, &dataArray[0], sizeof(dataArray) / sizeof(dataArray[0]));
    //InsertCircularLinkList(&circularLinkList, 1, dataArray[0]);
    PrintCircularLinkList(circularLinkList);
    printf("插入第三个元素后\n\n");
    element.id = 9;
    element.name =(char*)malloc(50);
    element.name ="李达康 京州市委书记 省委常委";
    InsertCircularLinkList(circularLinkList,3,element);
    PrintCircularLinkList(circularLinkList);
    delElement = DelNode(circularLinkList,5);
    printf("省委任免决定:  %s\n\n",delElement.name);
    PrintCircularLinkList(circularLinkList);
     node = GetCircularLinkList(circularLinkList,element);
     printf("从  《%s》  开始循环遍历\n\n",node->data.name);
     PrintCircularLinkListBynode(circularLinkList, node);
}
