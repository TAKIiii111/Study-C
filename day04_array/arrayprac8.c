//  8. 约瑟夫环问题（超经典逻辑题）
// 题目：10 个人围成一圈，从 1 开始报数，报到 3 的人退出。
// 输出退出顺序和最后剩下的人。
// 考察思维:1、数组标记 2、循环计数 3、模拟问题

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("input a n:");
    scanf("%d",&n);
    if ( n < 0 )
    {
        printf("wrong input!\n");
        return 1;
    }
    int *arr = (int*)malloc(n*sizeof(int));
    if ( arr = NULL )
    {
    printf("内存分配失败！\n");
    return 1;
    }

    //主体部分
    return 0;
}