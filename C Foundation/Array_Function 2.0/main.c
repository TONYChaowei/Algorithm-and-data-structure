#include <stdio.h>
#include <stdlib.h>


//自行实现一个pow函数
//求第一个参数的n次幂
double pow(double ,int );  //函数原型
int main()
{
    double num;
    int num1;
    printf("请输入参数\n");
    scanf("%lf ",&num);
    printf("几次幂\n");
    scanf("%d",&num1);
    printf("%.2lf的%d次幂为%lf",num,num1,pow(num,num1));
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
