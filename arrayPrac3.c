//  3. 数组元素向右循环移动
// 题目：输入一个长度为 8 的数组，将所有元素向右循环移动 1 位。
// 例如：1 2 3 4 5 → 5 1 2 3 4

// 考察思维
//  数组元素移动
//  临时变量保存
//  边界处理
#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int cnt=0;
    printf("input a number:");
    scanf("%d",&cnt);

    //动态分配内存部分
    int* num=(int*)malloc(cnt*sizeof(int));
    if (num == NULL)
    {
        printf("内存分配失败！");
        return 1;
    }
    //动态分配内存部分

    //输入元素
    int sz = 0;
    if (cnt != 0)
    {
        printf("请输入元素值：");
    }
    
    for (int i = 0; i < cnt; i++)
    {
        scanf("%d",&sz);
        num[i] = sz;
    }
    //输入元素

    //移位
    int n,j;
    printf("输入右移位数：");
    scanf("%d",&n);
    if (n <= 0)
    {
        printf("输入错误！");
        return 0;
    }

    //数组为空
    if (cnt==0)
    {
        printf("数组为空！");
        return 0;
    }
    //数组为空

    for (j = 0 ; j < n%cnt ; j++)
    {
        int i,temp;
        temp = num[cnt-1];
        for ( i = cnt-1; i >= 0; i--)
        {
            if (i>0)
            {   num[i]=num[i-1];    }
            else
            {   num[i]=temp;    }
        }
    }  
    //移位
    
    //打印结果
    for (int m = 0; m < cnt; m++)
    {
        printf("%d ",num[m]);
    }
    //打印结果
    
    printf("\n");

    printf("num的大小为:%d B",cnt*sizeof(int));

    free(num);
    return 0;
}