#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct personal
{
    int num;
    char name[50];
    char level[50];
    char post [50];
    char rank [50];
};
int main()
{
    //ʹ�ýṹ��
   struct personal pes = {1,"��η�","ʡ��","����ʡ ʡί��Ǽ��人�� ��ί��� ","����ʡһ���� ʡί���Ӱ೤"};
   printf("����%d\t������%s\t����%s\nĿǰ����ְλ��%s\n����ʡ ʡί��ί����������%s",pes.num,pes.name,pes.level,pes.post,pes.rank);
    return 0;
}
