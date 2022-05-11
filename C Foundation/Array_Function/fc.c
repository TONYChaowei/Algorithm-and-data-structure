#include <stdio.h>
#include <stdlib.h>
#define N 5
int i;
void input(double sort[])
{
    for(i = 0;i < N;i++)
    {
        printf("请输入第%d门课成绩",i + 1);
        scanf("%lf",(sort + i));
    }
}
void show(double sort[])
{
    printf("*********************************************\n");
    printf("语文\t数学\t英语\t物理\t化学\n");
    for(i = 0;i < N;i++)
    {
        printf("%.1lf\t",*(sort + i));
    }
    printf("\n*********************************************\n");
}
void sorts(double sort[])
{
    int i;
    int j;
    double temp;
    for(i = 0;i < N - 1;i++)
    {
        for(j = 0; j < N - i - 1;j++ )
        {
            if(*(sort + j) > *(sort + j + 1))
            {
                temp = *(sort + j);
                *(sort + j) = *(sort + j + 1);
                *(sort + j + 1) = temp;
            }
        }
    }

}
int find(double *sort ,int findNUM)
{
    int i;
    int findindex = -1;//要查找的下标
    for(i = 0;i < N;i++)
    {
       if( *(sort + i) == findNUM )
       {
           //记录下要查找的下标，结束查找动作
           findindex = i;
           break;
       }
    }
    return findindex;
}





