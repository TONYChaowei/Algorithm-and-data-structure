#include"SeqList.h"
#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"
/**
* ��ʼ��˳���
* seqList  Ҫ��ʼ����˳���
* elemArary  ��ʼ��Ҫ��ӵ�Ԫ����������
* length ��ʼ����ӵ�Ԫ�ظ���
*/
void InitList(SeqList * seqList, ElementType * elemArray, int length)
{
            if(length > MAX_SIZE)
            {
              printf("��������������������ʼ��ʧ��");
            }
            seqList->length =  0;                //�ǵ��ڳ�ʼ��˳����ʱ�򣬽�˳���ĳ�������
            for(int i =0;  i < length - 1; i++)
            {
                 //ÿ��ѭ�������±�Ϊi��λ�ò���һ��Ԫ��
                 InsertElement(seqList, i, elemArray[i]);
            }
}
/**
* ��˳����е�index�±괦����ĳ��Ԫ��
* seqList
* index    Ҫ������±�
* element  Ҫ�����Ԫ��
*/
void InsertElement(SeqList * seqList , int index  , ElementType element)
{
    //1.��֤������Ԫ�ؿռ��Ƿ񳬹�MAX_SIZE
    //2.index��ֵ�Ƿ�Ϸ���0��MAX_SIZE - 1��
    //3.�����indexӦ����length֮��
    //4.�ӵ�length - 1���±꿪ʼ��ǰ��һ��Ԫ�ظ�ֵ������һ��Ԫ��
    if(seqList ->length + 1 >= MAX_SIZE)
    {
        printf("����Ԫ������������Ԫ��ʧ�ܣ�\n");
        return;
    }
    if(index < 0 || index > MAX_SIZE - 1)
    {
        printf("ֻ�������±귶Χ�ڲ���Ԫ�ء�0��%d��",MAX_SIZE - 1);
        return;
    }
    if(index > seqList->length)
    {
        printf("������±곬�����������󳤶�-1������ʧ�ܣ�");
        return;
    }
    for(int i = seqList->length - 1; i >= index; i--)
    {
        seqList->datas[i + 1] = seqList->datas[i];
    }
    //5.��Ҫ�����ֵ������index��Ԫ��
    seqList->datas[index] = element;
    //6.˳����ȼ�1
    seqList->length++;
}
void PrintList(SeqList * seqList)
{
    for(int i= 0; i < seqList->length;i++)
    {
        printf("\t%-2d.%s\t",seqList->datas[i].id,seqList->datas[i].name);
    }
}
/**
* ɾ��˳�����ָ�����±�Ԫ��
* seqList  Ҫ������˳���
* index  Ҫɾ�����±�
* return ����ɾ����Ԫ��

*/
ElementType * DeleteElement(SeqList * seqList, int index)
{
    if(index < 0 || index > MAX_SIZE - 1)
    {
        printf("�±�Խ�磬�޷�ɾ��ָ�����±�Ԫ��");
        return NULL;
    }
    //1.�ҵ�Ҫɾ����Ԫ�أ��������������������ɾ��Ԫ�صĸ�����������
    ElementType * delElement = (ElementType*)malloc(sizeof(ElementType));
    //����������ò��Һ���������Ҫɾ��Ԫ�ص�ָ��
     * delElement = * GetElement(seqList,index);
    //��ָ��λ��ɾ��������һ��Ԫ�ظ�ֵ��ǰ��һ��Ԫ��
    for(int i = index; i < seqList->length - 1;i++)
    {
        seqList->datas[i] = seqList->datas[i + 1];
    }
    //˳����ȼ�һ
    seqList->length--;
    return delElement;
}
ElementType * GetElement(SeqList * seqList, int index)
{
       if(index < 0 || index > MAX_SIZE - 1)
    {
        printf("�±�Խ�磬�޷��ҵ�ָ�����±�Ԫ��");
        return NULL;
    }
    ElementType * element;
    element = &seqList->datas[index];
}
