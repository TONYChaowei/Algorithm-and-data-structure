//��Ӧhatal.h�ĺ���ʵ��
#include"hatal.h"
int choice;
int i;
char hatalname [5][50] = {"���б��","��������","άҲ�ɹ��ʾƵ�","��ͳ�׷�","Ӫ��С��"};
int nightnums;
int menu(void)
{
    for(i = 0;i < 5;i++)
    {
         printf("%d��%s\n" ,i + 1,*(hatalname + i));
    }

    printf("\n**************************************\n\n");
    printf("6.�˳�����\n");
    printf("����������ѡ��");
    scanf("%d",&choice);


   return choice;

}
int getnights(void)
{
    printf("����������ҪԤ��������\n");
    scanf("%d",nightnums);
    return nightnums;
}

