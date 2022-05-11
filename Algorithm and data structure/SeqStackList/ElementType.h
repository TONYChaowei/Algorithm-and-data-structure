#ifndef ELEMENTTYPE_H_INCLUDED
#define ELEMENTTYPE_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 4
typedef struct ElementType       /*在顺序栈中存放数据元素类型*/
{
    int ID;
    char *name;
}ElementType;
typedef struct
{
    int X;        //当前棋子的x y轴坐标
    int Y;
    int type;    //当前棋子类型
}chessMan;

/** 定义栈的顺序存储方式*/
typedef struct
{
     chessMan data[MAX_SIZE];
     int top;                                   /* 栈顶（数据元素的下标），如果为-1则证明栈为空*/
     int  length;
}SeqStack;



#endif // ELEMENTTYPE_H_INCLUDED
