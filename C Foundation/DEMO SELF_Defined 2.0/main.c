
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

double input(double); //�����û��������ж�

double calccircle(double);  //����

int main()
{
    //˼�����ڱ����У���Щ�����ǱȽ�ʵ�õģ��ǿ�����д�ɺ�����ε��õģ�
    //1.�û�����ı���������
    //2.��ӡ���
    double radius;  //�û�����İ뾶
    double s;       //���
    int width,height;  //���εĿ�͸�
    int choice;
    int side;
    printf("԰\t����\t������\n");

    printf("��ѡ��Ҫ���еĳ���\n");
    scanf("%d",&choice);
    while(choice < 0 || choice > 3)
    {
    printf("��ѡ��Ҫ���еĳ���\n");
    scanf("%d",&choice);
    }
    switch(choice)
    {
       case 1:
      {
        printf("������԰���������������\n");
        scanf("%lf",&radius);
        radius = input(radius);  //���û�����Ľ����ж���֤
        s = calccircle(radius);
        printf("���Ϊ%lf",s);
      }
       case 2:
        {
            printf("��������εĳ�\t��\n");
            scanf("%d",&width);
            width = input(width);
            printf("���п�\n");
            scanf("%d",&height);
            height = input(height);
            s = width * height;
            printf("���Ϊ%lf",s);
        }
       case 3:
        {
         printf("�����������εı߳�\n");
         scanf("%d",&side);
         side = input(side);
         s = side * side;
         printf("���������%lf",s);
        }

       default:
        {
            printf("�˳���ֻ֧�����������ͣ�������\n");
        }
    }
    return 0;
    }




double input(double num) //������֤����
{

    while(num < 0)
    {
        printf("���������������ȷ�Ĳ��� ��������Ϊ������\n");
        scanf("%lf",&num);
    }

    return num;
}
double calccircle(double radius)
{
    double s;
    s = PI * (radius * radius);
    return s;
}
