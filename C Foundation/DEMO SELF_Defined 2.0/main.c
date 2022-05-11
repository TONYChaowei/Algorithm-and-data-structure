
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

double input(double); //根据用户输入来判断

double calccircle(double);  //计算

int main()
{
    //思考：在本例中，那些功能是比较实用的？是可以书写成函数多次调用的？
    //1.用户输入的必须是正数
    //2.打印面积
    double radius;  //用户输入的半径
    double s;       //面积
    int width,height;  //矩形的宽和高
    int choice;
    int side;
    printf("园\t矩形\t正方形\n");

    printf("请选择要运行的程序\n");
    scanf("%d",&choice);
    while(choice < 0 || choice > 3)
    {
    printf("请选择要运行的程序\n");
    scanf("%d",&choice);
    }
    switch(choice)
    {
       case 1:
      {
        printf("请输入园的面积，我来计算\n");
        scanf("%lf",&radius);
        radius = input(radius);  //对用户输入的进行判断验证
        s = calccircle(radius);
        printf("面积为%lf",s);
      }
       case 2:
        {
            printf("请输入矩形的长\t宽\n");
            scanf("%d",&width);
            width = input(width);
            printf("还有宽\n");
            scanf("%d",&height);
            height = input(height);
            s = width * height;
            printf("面积为%lf",s);
        }
       case 3:
        {
         printf("请输入正方形的边长\n");
         scanf("%d",&side);
         side = input(side);
         s = side * side;
         printf("正方形面积%lf",s);
        }

       default:
        {
            printf("此程序只支持三个面积求和，请重试\n");
        }
    }
    return 0;
    }




double input(double num) //输入验证函数
{

    while(num < 0)
    {
        printf("输入错误，请输入正确的参数 参数不能为负数！\n");
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
