#ifndef MARKET_H_INCLUDED
#define MARKET_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
/*
模拟实现道具店购物功能(商店暂时只支持一种类型的商品）
1、商品结构-名称、单价、库存量、描述
2、背包结构-玩家编号、商品[10]、道具数量、最大道具数
3、玩家结构-编号、名称、密码、金钱、【背包] 模拟玩家购买游戏道具
模拟玩家购买道具
1、玩家选择要购买的道具
2、玩家同意交易后扣除相应游戏币
3、对应商品库存-1
4、玩家背包中增加商品或该商品数量+1*/
typedef struct commodity
{
    int id;                       //道具编号
    char name [50];    //道具名称
    int price;               //道具单价
    int repertory;       //库存量
    char des [100];  //道具的功能描述
}COM;
typedef struct bag
{
    int id;    //所属玩家编号
    int  num ;         //当前背包中，道具的数量
    int  stock;           //当前背包中插槽的数量
    COM com[8];        //当前背包中道具数组
}BAG;
typedef struct PLAYER
{
    int id;                     //玩家编号
    char name[50];      //用户名 昵称
    char password[50];     //密码
    int gold;                       //玩家拥有的金钱
    BAG bag;                      //玩家的背包
}player;
static COM *coms;
static player *players;
static int comcount;
static int playercounts;//
void init();        //初始化游戏数据的
void showcom();
void showplayer();
//交易函数
//参数1：参与交易的玩家指针-为了方便修改玩家交易后的金币数
//参数2：玩家购买的商品id
void  trade(player *p, int comid);

#endif // MARKET_H_INCLUDED
