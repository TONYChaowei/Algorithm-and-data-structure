#ifndef DATEELEMENT_H_INCLUDED
#define DATEELEMENT_H_INCLUDED
#define MAX_SIZE 255
#define TURE 0
#define FALSE 1
//1.��������Ԫ��
typedef struct
{
    int id;
    char *name;
}ElementType;
 //2.����˳���ṹ
 typedef struct
 {
     ElementType datas [MAX_SIZE];
     int length;
 }SeqList;
#endif // DATEELEMENT_H_INCLUDED
