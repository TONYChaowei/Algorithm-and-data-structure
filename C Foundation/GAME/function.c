#include"GM.h"

character ch[5];
void input()
{
    int i;
    for(i = 0;i < 2;i++)
    {
        printf("请输入第%d人物的信息\n",i +1);
        ch[i].id =i + 1;
        printf("请输入人物姓名\n");
        ch[i].name = (char *)malloc(20);
        scanf("%s",ch[i].name);
        printf("性别\n");
        ch[i].sex = (char*)malloc(20);
        scanf("%s",ch[i].sex);
        printf("职业\n");
        ch[i].occupation = (char *)malloc(20);
        scanf("%s",ch[i].occupation);
        printf("人物出场背景\n");
        ch[i].time = (char *)malloc(100);
        scanf("%s",ch[i].time);
    }
}
void output()
{
    int i;
    printf("人物的信息如下：\n");
    printf("序列\t姓名\t性别\t人物职业\t出场背景\n");
    for(i = 0;i < 2; i++)
    {
        printf("%d\t%s\t%s\t%s\t\t%s\n",ch[i].id,ch[i].name,ch[i].sex,ch[i].occupation,ch[i].time);
    }
}
