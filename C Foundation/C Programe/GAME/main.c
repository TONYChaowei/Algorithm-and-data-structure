#include"Gamelib.h"
#include<stdio.h>
#include"GAME.h"
#include<stdlib.h>
#include<windows.h>
#include<conio.h>  //����getch����
extern int X,Y;
char key;   //�����û��İ���
int main()
{
//�����û��İ���
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
        showMap();   //������ʾ��ͼ
    }

  return 0;
}
