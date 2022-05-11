#include"GAME.h"
#include"GAMElib.h"
int X = 2,Y = 1;
Map mapArray[3][3] = {
{
{1,"黑水镇",1,{0,0},"黑水镇是西伊丽莎白的州首府，也是本作剧情的发源地.黑水镇周国有丰富的木材业和矿业，最近几年来发展的尤为迅速。前期亚瑟是不能去往黑水镇的，约翰继承后可前往黑水镇自由活动"  },
{2,"瓦伦丁",2,{0,1},"一座坐落在大地之心，喧嚣又混乱的小镇。瓦伦丁的牲畜拍卖产业喜迎了无数原道而来的商人，牧场主，赌徒，亡命之徒，在此寻找赚钱机会，犯罪或者寻欢"},
{3,"罗兹",3,{0,2},"表面上古板而正规，背地里却暗流汹涌又充满腐败的南方小镇罗兹，多年以来一直陷于布雷斯韦家族和格雷家族这两大种植园家族的交货冲突之中"}
},
{
{4,"草莓镇",2,{1,0},"新的镇长上任之前，草莓镇仅仅是一个伐木小镇。新任镇长是一个来自东海岸的怪人，他沉迷于将草莓镇变成富有游客的向往之地，这让当地居民十分困惑。"},
{5,"翡翠牧场",3,{1,1},"是大地之心中部一座比较繁华的大型牧场，又一个冷酷的资本家所有，他妄图垄断附近所有的小型牧场。"},
{6,"圣丹尼斯",4,{1,2},"圣丹尼斯有着横跨美国的交易线路，是与北美连接的-个关键地点。在这繁华的城镇里，生意人、社会名流、水手、工人乞丐和小偷比邻而居，宛若一座文化大熔炉。"}
},
{
{7,"拉格拉斯",5,{2,0},"这是一座位于雷莫恩黑湾沼泽区的偏远小镇。拉格拉斯的人民多数过着自给自足的生活，钓鱼以及替想要游览这个地区的游客当向导，是他们主要的经济来源"},
{8,"范霍恩贸易站",6,{2,1},"是一座混乱无序的港口小镇，犯罪违法行为在这个小镇比比皆是"},
{9,"安尼斯堡",7,{2,2},"生活对于在安尼斯堡工作的矿工和他们的家人来说是不容易的。他们在拉那赫奇河附近挖煤的活动°已经持续了将近一个世纪。薪水少得可怜，工作环境恶劣，许多人甚至在矿井下失去了生命。"}
}
};
Prop propArray [] = {
{ 1,"左轮", 4, 99, 55,  weapon, .minAttack=30, .maxAttack=50, "牛仔必备搭配死亡之眼效果更佳哦!"},
{2,"狐猎步枪",5,2,85,weapon,.minAttack=10,.maxAttack=15,"适合捕猎小型动物"},
{3,"春田步枪",2,33,98,weapon,.minAttack=120,.maxAttack=150,"威力极大，适合捕猎大型动物，枪速较慢"},
{4,"蛇油",4,99,2,con,.minPower=3,.maxPower=8,"可快速恢复大量死亡之眼值"},
{5,"防弹衣",2,56,6,con,.minPower=30,.maxPower=60,"可快速恢复大量生命值"},
};
void init() //初始化据
{

}
 void show() //显示全局数据
 {
        int Propcount = sizeof(propArray) /sizeof(Prop);
        int i;
        int j;
        for(i = 0;i < Propcount;i++)
        {
            printf("%-4d%s\t价格：%.0lf\t",propArray[i].id,propArray[i].name,propArray[i].price);
             switch(propArray[i].type)
        {
        case weapon:  //武器类型
            printf("最小攻击力：%-4d\t最大攻击力：%d\n",propArray[i].minAttack,propArray[i].maxAttack);
            break;
        case con:
            printf("\t最小能量回复值：%d\t最大能量恢复值：%d\n",propArray[i].minPower,propArray[i].maxPower);
            break;
        }
        }
        printf("\n\t\t\t\t地图信息\n");
        printf("----------------------------------------------------------------------------\n");
        for(i = 0;i < 3;i++)
        {
            printf("|");
            for(j = 0;j < 3;j++)
            {
                   setColor(2,0);
                printf("\t%-18s",mapArray[i][j].name);
            }
            printf("|");
            printf("\n");
        }
        printf("----------------------------------------------------------------------------\n");
 }

void abss()  //横线
{
    for(int i = 0;i < 71;i++)
    {
        printf("-");
    }
}
void showWelcome()
{
    setPosition(MARGIN_X,0);
    abss();
    setPosition(MARGIN_X,1);
    printf("|");
    setPosition(MARGIN_X + 28,1);
    printf("欢迎来到西部");
    setPosition(MARGIN_X +70 ,1);
    printf("|");
    setPosition(MARGIN_X,2);
    abss();

}
void showMap()
{
    //要根据当前玩家的坐标 来显示地图的文字
    int i;
    int j;
    //setPosition(MARGIN_X,4);
     //printf("-----------------------------------------------------------------------\n");
    for(i = 0;i < 3;i++)
    {
         setPosition(MARGIN_X,5 + i);
        printf("|");
        for(j = 0;j < 3;j++)
        {
            if(i == Y && j == X)
            {
                setColor(5,15);
            }
            printf("\t%-18s",mapArray[i][j].name);
            setColor(2,0);
        }
        printf("|");
        printf("\n");
    }

    setPosition(MARGIN_X,8);
     printf("----------------------------------------------------------------------\n");
}
void showInformation()
{
    setPosition(MARGIN_X,INFOR_START_Y);
    //信息窗口一共有七行
    int i,j;
    for(i = 0; i < 5;i++)
    {
        setPosition(MARGIN_X,INFOR_START_Y + i);
          printf("|");
        setPosition(MARGIN_X + 70,INFOR_START_Y + i);
        printf("|");
        setPosition(MARGIN_X + 70,INFOR_START_Y + i );
    }
        setPosition(MARGIN_X ,INFOR_START_Y );
         printf("-----------------------------------------------------------------------");
         setPosition(MARGIN_X + 1,INFOR_START_Y + 1 );
for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            if(i == Y && j == X)
            {
                 //printf("%s",mapArray[i][j].desc);
            }
        }
     }
}
void showmainMenu()
{
    int i;
    for( i = 0;i < 9;i++)
    {
        setPosition(MARGIN_X,MAINMEAN_STATY_Y + i);
        printf("|");
        setPosition(MARGIN_X + 70,MAINMEAN_STATY_Y + i);
         printf("|");
    }
        setPosition(MARGIN_X+28,MAINMEAN_STATY_Y );
        printf("游戏主菜单");
       setPosition(MARGIN_X+1,MAINMEAN_STATY_Y + 2);
       printf("1.自我欣赏");
       setPosition(MARGIN_X+1,MAINMEAN_STATY_Y + 3);
       printf("2.查找位置");
}
