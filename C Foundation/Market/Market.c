#include"Market.h"
extern COM *coms;
extern player *players;
 extern int comcount;
 extern int playercounts;
void init()
{
    static COM com[] = {
         {1,"����",1,10,"�ظ�����֮��"},
         {2,"����ҩ",1,30,"�ظ���������ֵ"},
        {3,"�ɿ��������",2,6,"�����ظ�����������ֵ"},
        {4,"�߾�",2,9,"�ָ���������ֵ"}
     };
     coms = com;
     comcount = 4;
    static player P[] = {
     {1,"��ɪĦ��","595959", .gold=1},
    {2,"���淶���ֵ�","595959", .gold=50000},
    {3,"��","595959", .gold=50000}
     };
     players = P;
     playercounts = 3;
}
void showcom()
{
    int i;
    printf("���\t����\t\t\����\t���\t��Ʒ����\n");
    for(i = 0; i < comcount; i++)
    {
        printf("%2d\t%-13s\t%2d\t%2d\t%-4s\n",coms[i].id,coms[i].name,coms[i].price,coms[i].repertory,coms[i].des);
    }
}
void showplayer()
{
    int i;
    printf("���\t����\t\t\����\t\t���\n");
    for (i = 0;i < playercounts;i++)
    {
        printf("%d\t%-12s\t%s\t\t%d\n",players[i].id,players[i].name,players[i].password,players[i].gold);
    }
}
void  trade(player *p, int comid)
{
    int i;
     init();
    //��Ҫ�ж���Ʒ�Ŀ�棬��ҵĽ���� ��ұ����ռ乻����
     COM*tradecom  = NULL;  //Ҫ�������Ʒָ��
    for(i = 0;i < 4;i++)
    {
        if(comid == coms[i].id){
            tradecom = &(coms[i].id);
            break;
        }
    }
    if(tradecom->repertory <= 0)
    {
        printf("Ӫ��û�п���ˣ��Ͻ�ȥ���԰�");
        return;
    }
    if(p->gold < tradecom->price)
    {
        printf("ûǮ����ƨ");
    }
}
