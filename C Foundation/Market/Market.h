#ifndef MARKET_H_INCLUDED
#define MARKET_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
/*
ģ��ʵ�ֵ��ߵ깺�﹦��(�̵���ʱֻ֧��һ�����͵���Ʒ��
1����Ʒ�ṹ-���ơ����ۡ������������
2�������ṹ-��ұ�š���Ʒ[10]��������������������
3����ҽṹ-��š����ơ����롢��Ǯ��������] ģ����ҹ�����Ϸ����
ģ����ҹ������
1�����ѡ��Ҫ����ĵ���
2�����ͬ�⽻�׺�۳���Ӧ��Ϸ��
3����Ӧ��Ʒ���-1
4����ұ�����������Ʒ�����Ʒ����+1*/
typedef struct commodity
{
    int id;                       //���߱��
    char name [50];    //��������
    int price;               //���ߵ���
    int repertory;       //�����
    char des [100];  //���ߵĹ�������
}COM;
typedef struct bag
{
    int id;    //������ұ��
    int  num ;         //��ǰ�����У����ߵ�����
    int  stock;           //��ǰ�����в�۵�����
    COM com[8];        //��ǰ�����е�������
}BAG;
typedef struct PLAYER
{
    int id;                     //��ұ��
    char name[50];      //�û��� �ǳ�
    char password[50];     //����
    int gold;                       //���ӵ�еĽ�Ǯ
    BAG bag;                      //��ҵı���
}player;
static COM *coms;
static player *players;
static int comcount;
static int playercounts;//
void init();        //��ʼ����Ϸ���ݵ�
void showcom();
void showplayer();
//���׺���
//����1�����뽻�׵����ָ��-Ϊ�˷����޸���ҽ��׺�Ľ����
//����2����ҹ������Ʒid
void  trade(player *p, int comid);

#endif // MARKET_H_INCLUDED
