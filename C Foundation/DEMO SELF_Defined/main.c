#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926
//自定义函数（不考虑参数和返回值）
void calccircle();      //计算圆的面积
void calrectangle();   //计算矩形的面积
int   calcsum();  //计算1 - 100的偶数和
int main()
{
    printf("0到100的偶数和为%d",calcsum());
}
void calccircle()  //圆形
{
    double r;           //半径
    double s;           //面积
    printf("请输入园的半径\n");
    scanf("%lf",&r);
    s = r * r * PI;
    printf("园的面积%.2lf\n",s);

}
void calrectangle()
{
    int width;
    int height;
    int s;
    printf("请分别输入矩形的长与宽\n");
    scanf("%d",&height);
    printf("还有宽\n");
    scanf("%d",&width);
    s = width * height;
    printf("矩形的面积为%d",s);

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
