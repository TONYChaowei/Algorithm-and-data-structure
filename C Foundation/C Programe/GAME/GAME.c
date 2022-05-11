#include"GAME.h"
#include"GAMElib.h"
int X = 2,Y = 1;
Map mapArray[3][3] = {
{
{1,"��ˮ��",1,{0,0},"��ˮ����������ɯ�׵����׸���Ҳ�Ǳ�������ķ�Դ��.��ˮ���ܹ��зḻ��ľ��ҵ�Ϳ�ҵ�������������չ����ΪѸ�١�ǰ����ɪ�ǲ���ȥ����ˮ��ģ�Լ���̳к��ǰ����ˮ�����ɻ"  },
{2,"���׶�",2,{0,1},"һ�������ڴ��֮�ģ������ֻ��ҵ�С�����׶�������������ҵϲӭ������ԭ�����������ˣ�����������ͽ������֮ͽ���ڴ�Ѱ��׬Ǯ���ᣬ�������Ѱ��"},
{3,"����",3,{0,2},"�����ϹŰ�����棬������ȴ������ӿ�ֳ������ܵ��Ϸ�С�����ȣ���������һֱ���ڲ���˹Τ����͸��׼�����������ֲ԰����Ľ�����ͻ֮��"}
},
{
{4,"��ݮ��",2,{1,0},"�µ�������֮ǰ����ݮ�������һ����ľС����������һ�����Զ������Ĺ��ˣ��������ڽ���ݮ���ɸ����ο͵�����֮�أ����õ��ؾ���ʮ������"},
{5,"�������",3,{1,1},"�Ǵ��֮���в�һ���ȽϷ����Ĵ�����������һ�������ʱ������У�����ͼ¢�ϸ������е�С��������"},
{6,"ʥ����˹",4,{1,2},"ʥ����˹���ź�������Ľ�����·�����뱱�����ӵ�-���ؼ��ص㡣���ⷱ���ĳ���������ˡ����������ˮ�֡�������ؤ��С͵���ڶ��ӣ�����һ���Ļ�����¯��"}
},
{
{7,"������˹",5,{2,0},"����һ��λ����Ī��������������ƫԶС��������˹��������������Ը��������������Լ�����Ҫ��������������ο͵��򵼣���������Ҫ�ľ�����Դ"},
{8,"������ó��վ",6,{2,1},"��һ����������ĸۿ�С�򣬷���Υ����Ϊ�����С��ȱȽ���"},
{9,"����˹��",7,{2,2},"��������ڰ���˹�������Ŀ󹤺����ǵļ�����˵�ǲ����׵ġ����������Ǻ���Ӹ�����ú�Ļ���Ѿ������˽���һ�����͡�нˮ�ٵÿ����������������ӣ�����������ڿ���ʧȥ��������"}
}
};
Prop propArray [] = {
{ 1,"����", 4, 99, 55,  weapon, .minAttack=30, .maxAttack=50, "ţ�бر���������֮��Ч������Ŷ!"},
{2,"���Բ�ǹ",5,2,85,weapon,.minAttack=10,.maxAttack=15,"�ʺϲ���С�Ͷ���"},
{3,"���ﲽǹ",2,33,98,weapon,.minAttack=120,.maxAttack=150,"���������ʺϲ��Դ��Ͷ��ǹ�ٽ���"},
{4,"����",4,99,2,con,.minPower=3,.maxPower=8,"�ɿ��ٻָ���������֮��ֵ"},
{5,"������",2,56,6,con,.minPower=30,.maxPower=60,"�ɿ��ٻָ���������ֵ"},
};
void init() //��ʼ����
{

}
 void show() //��ʾȫ������
 {
        int Propcount = sizeof(propArray) /sizeof(Prop);
        int i;
        int j;
        for(i = 0;i < Propcount;i++)
        {
            printf("%-4d%s\t�۸�%.0lf\t",propArray[i].id,propArray[i].name,propArray[i].price);
             switch(propArray[i].type)
        {
        case weapon:  //��������
            printf("��С��������%-4d\t��󹥻�����%d\n",propArray[i].minAttack,propArray[i].maxAttack);
            break;
        case con:
            printf("\t��С�����ظ�ֵ��%d\t��������ָ�ֵ��%d\n",propArray[i].minPower,propArray[i].maxPower);
            break;
        }
        }
        printf("\n\t\t\t\t��ͼ��Ϣ\n");
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

void abss()  //����
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
    printf("��ӭ��������");
    setPosition(MARGIN_X +70 ,1);
    printf("|");
    setPosition(MARGIN_X,2);
    abss();

}
void showMap()
{
    //Ҫ���ݵ�ǰ��ҵ����� ����ʾ��ͼ������
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
    //��Ϣ����һ��������
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
        printf("��Ϸ���˵�");
       setPosition(MARGIN_X+1,MAINMEAN_STATY_Y + 2);
       printf("1.��������");
       setPosition(MARGIN_X+1,MAINMEAN_STATY_Y + 3);
       printf("2.����λ��");
}
