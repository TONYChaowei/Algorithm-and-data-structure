#ifndef GM_H_INCLUDED
#define GM_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

//结构体 ：人物，姓名，职业，英雄能力，时间
typedef struct Character
{
    int id;                             //序列
    char *name;                  //名字
    char *sex;                        //性别
    char *occupation;        //人物职业
    char *time;                  //出现时间
}character;
void input ();
void output();

#endif // GM_H_INCLUDED
