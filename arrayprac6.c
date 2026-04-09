/*
 6. 数组中连续最大和（简单版）
题目：给定一个整数数组，求连续若干个元素的最大和。
例如数组：1 -2 3 4 -5
最大连续和是 3+4=7

考察思维
 动态累加
 状态更新
 贪心思想入门
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("input a n :");
    scanf("%d",&n);
    if (n <= 0)
    {
        printf("n无效!\n");
        return 1;
    }

    int* arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        printf("内存分配失败！");
        return 1;
    }

    printf("输入数组元素：");
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int j,maxSum;
    maxSum = arr[0];

    int sum;
    sum = arr[0];
    for (j = 1; j < n; j++)
    {
        //1 -2 3 4 -5
        //max=1,sum=1 -> max=1,sum+=arr[j] && sum>arr[j]<max >>sum=-2 -> 
        //max=1,sum+=arr[j]<arr[j] >>sum=arr[j]
        if (sum+arr[j] > arr[j])
        {
            sum+=arr[j];
        }else{
            sum=arr[j];
        }

        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }
    
    printf("maxSum=%d",maxSum);
    
    free(arr);
    return 0;
}