#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926
//�Զ��庯���������ǲ����ͷ���ֵ��
void calccircle();      //����Բ�����
void calrectangle();   //������ε����
int   calcsum();  //����1 - 100��ż����
int main()
{
    printf("0��100��ż����Ϊ%d",calcsum());
}
void calccircle()  //Բ��
{
    double r;           //�뾶
    double s;           //���
    printf("������԰�İ뾶\n");
    scanf("%lf",&r);
    s = r * r * PI;
    printf("԰�����%.2lf\n",s);

}
void calrectangle()
{
    int width;
    int height;
    int s;
    printf("��ֱ�������εĳ����\n");
    scanf("%d",&height);
    printf("���п�\n");
    scanf("%d",&width);
    s = width * height;
    printf("���ε����Ϊ%d",s);

}
int calcsum()
{
    int i;
    int sum = 0;
    for (i = 1;i < 101; i++)
    {
        if ( i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}
