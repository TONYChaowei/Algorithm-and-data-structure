#include"GAMElib.h"
#include<windows.h>
//���ÿ���̨���ڱ���
void setTitle(char *title)
{
    SetConsoleTitle(title);
}
void setColor(int foreColor,int backColor)
{
    HANDLE winHandle;   //���
    winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    //�����ı���ɫ
    SetConsoleTextAttribute(winHandle,foreColor + backColor * 0x10);
}
void setPosition(int x,int y)
{
     HANDLE winHandle;   //���
     COORD pos = {x,y};
    winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    //���ù������
    SetConsoleCursorPosition(winHandle,pos);
}
