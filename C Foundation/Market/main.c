#include"Market.h"

int main()
{
    int comids;
     init();             //��ʼ����Ϸ����
     showcom();          //��ӡ��Щ��ʼ������
     printf("\n\n\n\n\n");
     showplayer();
     printf("\n\n\n\n\n");
     printf("������Ҫ�������Ʒ���\n");
     scanf("%d",&comids);
     trade(&players[0],comids);
    return 0;
}
