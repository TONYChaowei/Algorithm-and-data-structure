#include <stdio.h>
#include <stdlib.h>


//����ʵ��һ��pow����
//���һ��������n����
double pow(double ,int );  //����ԭ��
int main()
{
    double num;
    int num1;
    printf("���������\n");
    scanf("%lf ",&num);
    printf("������\n");
    scanf("%d",&num1);
    printf("%.2lf��%d����Ϊ%lf",num,num1,pow(num,num1));
    return 0;

}
double pow(double num,int num1)
{
    double result = 1;
    double sum;
    int i;
    for( i = 0 ; i < num1 ; i++)
    {
        sum = result *= num;
    }
    return sum;

}
