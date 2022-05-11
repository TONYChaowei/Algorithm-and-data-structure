#include <stdio.h>
#include <stdlib.h>
#define N 6

//书写一个小型的学生成绩管理系统
//录入函数
void input(double[]);
void sorts(double[]);
void show(double[]);
int find(double *,int findNUM);//向传入的数组中寻找num，如果存在，返回下标，若不存在则返回-1

int main()
{

    //量数组里有多少个元素
    int test[] = {55,88,99,88,77,55,36};
    printf("test数组里有%d个\n",sizeof(test) / sizeof(*(test)));
    int findNUM;
    int findindex;
    double sort[N];
    //录入
    input(sort);
    printf("排序前\n");
    show(sort);
    //排序
    sorts(sort);
    //按照某种格式打印
     printf("排序后\n");
     show(sort);
     printf("请输入你要查找的数据\n");
      scanf("%d",&findNUM);
      findindex = find(sort, findNUM);
      printf("该数据的下标为:%d\n",findindex + 1);



    return 0;
}
