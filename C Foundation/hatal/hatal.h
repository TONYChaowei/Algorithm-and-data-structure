#ifndef HATAL_H_INCLUDED
#define HATAL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

//���ҾƵ�Ĭ�ϵķ���
#define HATAL1 872.0
#define HATAL2 1838.0
#define HATAL3 789.0
#define HATAL4 1658.0
#define DISCOUNT  0.95  //�ۿ���

//�˵���������ʾ�˵�ѡ����ܲ������û�������
int menu(void);
//����Ԥ��������
int getnights(void);
//��ʾҪ֧���ļ�Ǯ
void showprice(int nights);
#endif // HATAL_H_INCLUDED
