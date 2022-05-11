//对应hatal.h的函数实现
#include"hatal.h"
int choice;
int i;
char hatalname [5][50] = {"城市便捷","保利香槟","维也纳国际酒店","总统套房","营北小区"};
int nightnums;
int menu(void)
{
    for(i = 0;i < 5;i++)
    {
         printf("%d·%s\n" ,i + 1,*(hatalname + i));
    }

    printf("\n**************************************\n\n");
    printf("6.退出程序\n");
    printf("请输入您的选择：");
    scanf("%d",&choice);


   return choice;

}
int getnights(void)
{
    printf("请您输入你要预定的天数\n");
    scanf("%d",nightnums);
    return nightnums;
}

