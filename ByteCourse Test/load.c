//写一个简易登录程序，输入密码，如果错误3次则退出
#include<stdio.h>
#include<string.h>
int main()
{
    char pwd[10]="123456";
    char key[10]="";

    printf("input key:>");
    // printf("%d",strcmp(pwd,key));
    int cnt = 1;
    while (cnt <= 3)
    {
        scanf("%s",key);
        if ((strcmp(pwd,key)+1))
        {
            printf("登录成功！\n");
            break;
        }else{
            printf("密码错误\n");
            if (cnt < 3)
            {
                printf("请重新输入:>");
            }
        }
        cnt++;
    }
    printf("\n");
    if (cnt > 3 && strcmp(pwd,key) != 0)
    {
        printf("密码错误超过3次！\n登录失败！");
    }
    return 0;
}