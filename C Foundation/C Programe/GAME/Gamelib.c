#include"GAMElib.h"
#include<windows.h>
//设置控制台窗口标题
void setTitle(char *title)
{
    SetConsoleTitle(title);
}
void setColor(int foreColor,int backColor)
{
    HANDLE winHandle;   //句柄
    winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    //设置文本颜色
    SetConsoleTextAttribute(winHandle,foreColor + backColor * 0x10);
}
void setPosition(int x,int y)
{
     HANDLE winHandle;   //句柄
     COORD pos = {x,y};
    winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    //设置光标坐标
    SetConsoleCursorPosition(winHandle,pos);
}
