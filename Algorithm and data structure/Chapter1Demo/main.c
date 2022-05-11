#include "DataElement.h"
#include"SeqList.h"
#include"LinkList.h"
#include<windows.h>
#include"CircularLinkList.h"
ElementType dataArray[] = {
{1,"ɳ��� ����ʡί��� "},
{3,"������ ����ʡί����Ǽ�����ί��� "},
{12,"��ͬΰ ����ʡ����������"},
{2,"����ʡ��"}
};
/** ���Ժ���*/
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
    SeqList seqList;     //Ҫ������˳���
    ElementType * delElement;
    InitList(&seqList,&dataArray[0],sizeof(dataArray) / sizeof(dataArray[0]) + 1);
     printf("��ʼ����\n");
    PrintList(&seqList);
    printf("\nɾ����\n");
    delElement = DeleteElement(&seqList,2);
    PrintList(&seqList);
    printf("\n��ɾ����Ԫ��Ϊ\n");
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
    printf("�����\n");
    PrintLinkList(&linkList);
    printf("ɾ�����������Ԫ��\n");
    DeleteLinkListElement(&linkList, 3);
    PrintLinkList(&linkList);
    printf("��������\n");
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
    printf("���������Ԫ�غ�\n\n");
    element.id = 9;
    element.name =(char*)malloc(50);
    element.name ="��￵ ������ί��� ʡί��ί";
    InsertCircularLinkList(circularLinkList,3,element);
    PrintCircularLinkList(circularLinkList);
    delElement = DelNode(circularLinkList,5);
    printf("ʡί�������:  %s\n\n",delElement.name);
    PrintCircularLinkList(circularLinkList);
     node = GetCircularLinkList(circularLinkList,element);
     printf("��  ��%s��  ��ʼѭ������\n\n",node->data.name);
     PrintCircularLinkListBynode(circularLinkList, node);
}
