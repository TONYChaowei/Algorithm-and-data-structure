#include"hatal.h"
int main()
{
    //�û�������ס�ľƵ����������������Ӧ�Ľ��
    //1.��ʾ�˵� - ��װ�ɺ���
    //�������
    int choice;
    choice = menu();
    extern char hatalname [5][50];
    if(choice > 0&&choice < 6)
    {
        printf("������ľƵ�Ϊ��");
        printf("%s",*(hatalname + choice - 1));

    }
    else if(choice == 6)
      {
        printf("���˳��ó���");
      }

    return 0;
}
