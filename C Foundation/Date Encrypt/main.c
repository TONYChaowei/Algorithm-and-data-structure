#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define KEY 5  //密钥
/*
加密传入的字符串
参数1：要加密的字符串
返回值加密后的字符串
*/
char * encrypt(char password[]);//加密程序
char * decrypt(char password[]);//解密程序
int main()
{
    char password[] = "Krislish";
    printf("加密前的密码:%s\n",password);
    printf("加密后的密码:%s\n",encrypt(password));
     printf("解密后的密码:%s\n",decrypt(password));
    return 0;
}
 char * encrypt( char password[])  //加密程序
{
    int i;
    int count;
    count = strlen(password);//字符串的长度
    for(i = 0; i < count;i++)
    {
            password[i] = *(password + i) + i + KEY;
    }
    return password;
}

char * decrypt( char password[])   //解密程序
{
    int i;
    int count;
    count = strlen(password);
    for(i = 0; i <  count;i++)
    {
       //将字符串中每一个字符加上它在字符串中的位置和一个偏移量5
       password[i] = *(password + i) - i - KEY;
    }
    return password;
}
