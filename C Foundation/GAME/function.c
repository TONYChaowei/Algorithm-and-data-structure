#include"GM.h"

character ch[5];
void input()
{
    int i;
    for(i = 0;i < 2;i++)
    {
        printf("�������%d�������Ϣ\n",i +1);
        ch[i].id =i + 1;
        printf("��������������\n");
        ch[i].name = (char *)malloc(20);
        scanf("%s",ch[i].name);
        printf("�Ա�\n");
        ch[i].sex = (char*)malloc(20);
        scanf("%s",ch[i].sex);
        printf("ְҵ\n");
        ch[i].occupation = (char *)malloc(20);
        scanf("%s",ch[i].occupation);
        printf("�����������\n");
        ch[i].time = (char *)malloc(100);
        scanf("%s",ch[i].time);
    }
}
void output()
{
    int i;
    printf("�������Ϣ���£�\n");
    printf("����\t����\t�Ա�\t����ְҵ\t��������\n");
    for(i = 0;i < 2; i++)
    {
        printf("%d\t%s\t%s\t%s\t\t%s\n",ch[i].id,ch[i].name,ch[i].sex,ch[i].occupation,ch[i].time);
    }
}
