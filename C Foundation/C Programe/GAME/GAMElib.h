#ifndef GAMELIB_H_INCLUDED
#define GAMELIB_H_INCLUDED
/*游戏的库文件，定义文件中常用的系统操作*/
#include <stdio.h>
#include<windows.h>
//设置控制台窗口的标题
void setTitle(char *title);
//设置颜色
void setColor();
//设置光标位置
void setPosition(int x,int y);
#endif // GAMELIB_H_INCLUDED
