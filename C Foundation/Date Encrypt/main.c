#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define KEY 5  //��Կ
/*
���ܴ�����ַ���
����1��Ҫ���ܵ��ַ���
����ֵ���ܺ���ַ���
*/
char * encrypt(char password[]);//���ܳ���
char * decrypt(char password[]);//���ܳ���
int main()
{
    char password[] = "Krislish";
    printf("����ǰ������:%s\n",password);
    printf("���ܺ������:%s\n",encrypt(password));
     printf("���ܺ������:%s\n",decrypt(password));
    return 0;
}
 char * encrypt( char password[])  //���ܳ���
{
    int i;
    int count;
    count = strlen(password);//�ַ����ĳ���
    for(i = 0; i < count;i++)
    {
            password[i] = *(password + i) + i + KEY;
    }
    return password;
}

char * decrypt( char password[])   //���ܳ���
{
    int i;
    int count;
    count = strlen(password);
    for(i = 0; i <  count;i++)
    {
       //���ַ�����ÿһ���ַ����������ַ����е�λ�ú�һ��ƫ����5
       password[i] = *(password + i) - i - KEY;
    }
    return password;
}
