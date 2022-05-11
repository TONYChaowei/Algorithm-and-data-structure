#ifndef HATAL_H_INCLUDED
#define HATAL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

//各家酒店默认的房费
#define HATAL1 872.0
#define HATAL2 1838.0
#define HATAL3 789.0
#define HATAL4 1658.0
#define DISCOUNT  0.95  //折扣率

//菜单函数：显示菜单选项，接受并返回用户的输入
int menu(void);
//返回预定的天数
int getnights(void);
//显示要支付的价钱
void showprice(int nights);
#endif // HATAL_H_INCLUDED
