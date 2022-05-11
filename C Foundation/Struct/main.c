#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct personal
{
    int num;
    char name[50];
    char level[50];
    char post [50];
    char rank [50];
};
int main()
{
    //使用结构体
   struct personal pes = {1,"李嘉凡","省级","湖北省 省委书记兼武汉市 市委书记 ","湖北省一把手 省委班子班长"};
   printf("排名%d\t姓名：%s\t级别：%s\n目前担任职位：%s\n湖北省 省委常委班子排名：%s",pes.num,pes.name,pes.level,pes.post,pes.rank);
    return 0;
}
