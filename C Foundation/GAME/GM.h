#ifndef GM_H_INCLUDED
#define GM_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

//�ṹ�� �����������ְҵ��Ӣ��������ʱ��
typedef struct Character
{
    int id;                             //����
    char *name;                  //����
    char *sex;                        //�Ա�
    char *occupation;        //����ְҵ
    char *time;                  //����ʱ��
}character;
void input ();
void output();

#endif // GM_H_INCLUDED
