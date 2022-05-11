#ifndef SEQLIST_H_INCLUDED
#define SEQLIST_H_INCLUDED
/*
定义顺序表
*/
#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"
/**
* 初始化顺序表
* seqList  要初始化的顺序表
* elemArary  初始化要添加的元素内容数组
* length 初始化添加的元素个数
*/
void InitList(SeqList * seqList, ElementType * elemArray, int length);

/**
* 向顺序表中的index下标处插入某个元素
* seqList
* index    要插入的下标
* element  要插入的元素
*/
void InsertElement(SeqList * seqList , int index  , ElementType element);
void PrintList(SeqList * seqList);
/**
* 删除顺序表中指定的下标元素
* seqList  要操作的顺序表
*  index  要删除的下标
*  return 返回删除的元素，如果删除失败，返回NULL
*/
ElementType * DeleteElement(SeqList * seqList, int index);
/**
* 返回顺序表中指定的下标元素
* seqList  要操作的顺序表
*  index  要返回的元素的下标
*  return 返回指定下标的元素，如果查找失败，返回NULL
*/
ElementType * GetElement(SeqList * seqList, int index);
#endif // SEQLIST_H_INCLUDED
