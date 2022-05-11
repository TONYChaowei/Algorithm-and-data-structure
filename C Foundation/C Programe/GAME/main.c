#include"Gamelib.h"
#include<stdio.h>
#include"GAME.h"
#include<stdlib.h>
#include<windows.h>
#include<conio.h>  //包含getch函数
extern int X,Y;
char key;   //接收用户的按键
int main()
{
//接收用户的按键
    setColor(2,0);
     setTitle("Red Dead Redemption 2");
    showWelcome();
    showMap();
    showInformation();
    showmainMenu();
     for(;;)
    {

        key = getch();  //getchar

         if(key == 72)
        {
            Y--;
        }
        else if(key == VK_DOWN)
        {
            Y++;
        }
        else if(key == VK_RIGHT)
        {
            X++;
        }
        else if(key == VK_LEFT)
        {
            X--;
        }
        if(X > 2) X = 0;
        if(X < 0) X =2;
        if(Y > 2) Y = 0;
        if(Y < 0) Y = 2;
        showMap();   //重新显示地图
    }

  return 0;
}
