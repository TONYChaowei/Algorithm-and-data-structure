#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
//������������Ϸ�ĺ��Ľṹ�ͺ���
#include<stdio.h>
#include<string.h>
#include<windows.h>
#define COL 78          //��Ϸ������ܿ��
#define MARGIN_X 20   //��߾�
#define  INFOR_START_Y 8
#define MAINMEAN_STATY_Y 13
//��Ϸ�Ľṹ�Ķ���
//��ң���ͼ��װ��������

typedef struct _map
{
    int id;
    char name[50];
    int minLevel;
    COORD coord;
    char desc [500];
}Map;
//��Ϸ��������ö�� - ���������ߣ�����Ʒ����Ƭ����Ƭ
typedef enum proptype
{
    weapon,armor,con,card,frag     //��Ϸ��������ö�� - ���������ߣ�����Ʒ����Ƭ����Ƭ
}Proptype;
 typedef struct porp{
 int id;                           //���ߵı��
 char name[50];           //���ߵ�����
 int level;                    //���ߵļ���
 int stock;                 //���ߵĿ�����ұ����еĵ�������
 double price;          //���ߵĵ���
   Proptype type;      //��������
 union {//���϶�ѡһ
    int minAttack;         //������������Ͷ�Ӧ������
    int minDefence;      //����Ƿ��ߣ��Ͷ�Ӧ������
    int minPower;         //�����Ѫƿ������Ʒ���Ͷ�Ӧ���ӵ�����ֵ
 };
 union{//���϶�ѡһ
    int maxAttack;         //������������Ͷ�Ӧ������
    int maxDefence;      //����Ƿ��ߣ��Ͷ�Ӧ������
    int maxPower;          //�����Ѫƿ������Ʒ���Ͷ�Ӧ���ӵ�����ֵ
 };
 char desc[200];
 }Prop;
void init();  //��ʼ����Ϸ����
void show(); //��ʾȫ������
void showWelcome();  //��ʾ��Ϸ�Ļ�ӭ��Ϣ
void showMap();     //��ʾ��Ϸ��ͼ
void showInformation();  //��ʾ��Ϸ��ͼ�·�����Ϸ��Ϣ
void showmainMenu();  //��ʾ��Ϸ�����˵�
void abss();   //����

#endif // GAME_H_INCLUDED
