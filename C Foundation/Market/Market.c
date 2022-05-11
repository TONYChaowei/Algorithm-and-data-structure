#include"Market.h"
extern COM *coms;
extern player *players;
 extern int comcount;
 extern int playercounts;
void init()
{
    static COM com[] = {
         {1,"嚼烟",1,10,"回复死亡之眼"},
         {2,"疗伤药",1,30,"回复部分生命值"},
        {3,"可卡因口香糖",2,6,"大量回复体力与生命值"},
        {4,"蛇酒",2,9,"恢复核心生命值"}
     };
     coms = com;
     comcount = 4;
    static player P[] = {
     {1,"亚瑟摩根","595959", .gold=1},
    {2,"达奇范德林德","595959", .gold=50000},
    {3,"麦卡","595959", .gold=50000}
     };
     players = P;
     playercounts = 3;
}
void showcom()
{
    int i;
    printf("编号\t名称\t\t\单价\t库存\t商品介绍\n");
    for(i = 0; i < comcount; i++)
    {
        printf("%2d\t%-13s\t%2d\t%2d\t%-4s\n",coms[i].id,coms[i].name,coms[i].price,coms[i].repertory,coms[i].des);
    }
}
void showplayer()
{
    int i;
    printf("编号\t姓名\t\t\密码\t\t金币\n");
    for (i = 0;i < playercounts;i++)
    {
        printf("%d\t%-12s\t%s\t\t%d\n",players[i].id,players[i].name,players[i].password,players[i].gold);
    }
}
void  trade(player *p, int comid)
{
    int i;
     init();
    //需要判断商品的库存，玩家的金币余额， 玩家背包空间够不够
     COM*tradecom  = NULL;  //要购买的商品指针
    for(i = 0;i < 4;i++)
    {
        if(comid == coms[i].id){
            tradecom = &(coms[i].id);
            break;
        }
    }
    if(tradecom->repertory <= 0)
    {
        printf("营地没有库存了，赶紧去打猎吧");
        return;
    }
    if(p->gold < tradecom->price)
    {
        printf("没钱你买屁");
    }
}
