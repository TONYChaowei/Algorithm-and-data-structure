#include"Market.h"

int main()
{
    int comids;
     init();             //初始化游戏数据
     showcom();          //打印这些初始化数据
     printf("\n\n\n\n\n");
     showplayer();
     printf("\n\n\n\n\n");
     printf("请输入要购买的商品编号\n");
     scanf("%d",&comids);
     trade(&players[0],comids);
    return 0;
}
