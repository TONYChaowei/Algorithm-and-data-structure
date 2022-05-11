#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
//描述：定义游戏的核心结构和函数
#include<stdio.h>
#include<string.h>
#include<windows.h>
#define COL 78          //游戏界面的总宽度
#define MARGIN_X 20   //左边距
#define  INFOR_START_Y 8
#define MAINMEAN_STATY_Y 13
//游戏的结构的定义
//玩家，地图，装备，怪物

typedef struct _map
{
    int id;
    char name[50];
    int minLevel;
    COORD coord;
    char desc [500];
}Map;
//游戏道具类型枚举 - 武器，道具，消耗品，卡片，碎片
typedef enum proptype
{
    weapon,armor,con,card,frag     //游戏道具类型枚举 - 武器，道具，消耗品，卡片，碎片
}Proptype;
 typedef struct porp{
 int id;                           //道具的编号
 char name[50];           //道具的名称
 int level;                    //道具的级别
 int stock;                 //道具的库存或玩家背包中的叠加数量
 double price;          //道具的单价
   Proptype type;      //道具类型
 union {//联合多选一
    int minAttack;         //如果是武器，就对应攻击力
    int minDefence;      //如果是防具，就对应防御力
    int minPower;         //如果是血瓶等消耗品，就对应增加的能量值
 };
 union{//联合多选一
    int maxAttack;         //如果是武器，就对应攻击力
    int maxDefence;      //如果是防具，就对应防御力
    int maxPower;          //如果是血瓶等消耗品，就对应增加的能量值
 };
 char desc[200];
 }Prop;
void init();  //初始化游戏数据
void show(); //显示全局数据
void showWelcome();  //显示游戏的欢迎信息
void showMap();     //显示游戏地图
void showInformation();  //显示游戏地图下方的游戏信息
void showmainMenu();  //显示游戏的主菜单
void abss();   //横线

#endif // GAME_H_INCLUDED
