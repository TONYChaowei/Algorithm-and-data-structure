#include <stdio.h>
#include <stdlib.h>
#define N 6

//��дһ��С�͵�ѧ���ɼ�����ϵͳ
//¼�뺯��
void input(double[]);
void sorts(double[]);
void show(double[]);
int find(double *,int findNUM);//�����������Ѱ��num��������ڣ������±꣬���������򷵻�-1

int main()
{

    //���������ж��ٸ�Ԫ��
    int test[] = {55,88,99,88,77,55,36};
    printf("test��������%d��\n",sizeof(test) / sizeof(*(test)));
    int findNUM;
    int findindex;
    double sort[N];
    //¼��
    input(sort);
    printf("����ǰ\n");
    show(sort);
    //����
    sorts(sort);
    //����ĳ�ָ�ʽ��ӡ
     printf("�����\n");
     show(sort);
     printf("��������Ҫ���ҵ�����\n");
      scanf("%d",&findNUM);
      findindex = find(sort, findNUM);
      printf("�����ݵ��±�Ϊ:%d\n",findindex + 1);



    return 0;
}
