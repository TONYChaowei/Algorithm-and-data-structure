#include"SeqList.h"
#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"
/**
* 初始化顺序表
* seqList  要初始化的顺序表
* elemArary  初始化要添加的元素内容数组
* length 初始化添加的元素个数
*/
void InitList(SeqList * seqList, ElementType * elemArray, int length)
{
            if(length > MAX_SIZE)
            {
              printf("超过数组的最大容量，初始化失败");
            }
            seqList->length =  0;                //记得在初始化顺序表的时候，将顺序表的长度置零
            for(int i =0;  i < length - 1; i++)
            {
                 //每次循环都在下标为i的位置插入一个元素
                 InsertElement(seqList, i, elemArray[i]);
            }
}
/**
* 向顺序表中的index下标处插入某个元素
* seqList
* index    要插入的下标
* element  要插入的元素
*/
void InsertElement(SeqList * seqList , int index  , ElementType element)
{
    //1.验证插入后的元素空间是否超过MAX_SIZE
    //2.index的值是否合法【0，MAX_SIZE - 1】
    //3.插入的index应该在length之内
    //4.从第length - 1个下标开始，前面一个元素赋值给后面一个元素
    if(seqList ->length + 1 >= MAX_SIZE)
    {
        printf("数组元素已满，插入元素失败！\n");
        return;
    }
    if(index < 0 || index > MAX_SIZE - 1)
    {
        printf("只允许在下标范围内插入元素【0，%d】",MAX_SIZE - 1);
        return;
    }
    if(index > seqList->length)
    {
        printf("插入的下标超过了数组的最大长度-1，插入失败！");
        return;
    }
    for(int i = seqList->length - 1; i >= index; i--)
    {
        seqList->datas[i + 1] = seqList->datas[i];
    }
    //5.将要插入的值赋给第index个元素
    seqList->datas[index] = element;
    //6.顺序表长度加1
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
* 删除顺序表中指定的下标元素
* seqList  要操作的顺序表
* index  要删除的下标
* return 返回删除的元素

*/
ElementType * DeleteElement(SeqList * seqList, int index)
{
    if(index < 0 || index > MAX_SIZE - 1)
    {
        printf("下标越界，无法删除指定的下标元素");
        return NULL;
    }
    //1.找到要删除的元素，并保存起来（保存的是删除元素的副本！！！）
    ElementType * delElement = (ElementType*)malloc(sizeof(ElementType));
    //单独定义调用查找函数，返回要删除元素的指针
     * delElement = * GetElement(seqList,index);
    //从指定位置删除，后面一个元素赋值给前面一个元素
    for(int i = index; i < seqList->length - 1;i++)
    {
        seqList->datas[i] = seqList->datas[i + 1];
    }
    //顺序表长度减一
    seqList->length--;
    return delElement;
}
ElementType * GetElement(SeqList * seqList, int index)
{
       if(index < 0 || index > MAX_SIZE - 1)
    {
        printf("下标越界，无法找到指定的下标元素");
        return NULL;
    }
    ElementType * element;
    element = &seqList->datas[index];
}
