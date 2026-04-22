#include<stdio.h>
int main()
{
    int num[10];
    printf("请输入10个整数：");
    for(int i=0;i<10;i++) 
    {
        scanf("%d",&num[i]);
    }  
    for(int i=0;i<2;i++){
        printf("i=%d\n",i);
        num[i]=num[i++];
        printf("i=%d",i);
    }
    return 0;
}