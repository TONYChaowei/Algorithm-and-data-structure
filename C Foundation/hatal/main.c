#include"hatal.h"
int main()
{
    //用户输入入住的酒店和天数，程序计算对应的金额
    //1.显示菜单 - 封装成函数
    //计算过程
    int choice;
    choice = menu();
    extern char hatalname [5][50];
    if(choice > 0&&choice < 6)
    {
        printf("您输入的酒店为：");
        printf("%s",*(hatalname + choice - 1));

    }
    else if(choice == 6)
      {
        printf("已退出该程序");
      }

    return 0;
}
