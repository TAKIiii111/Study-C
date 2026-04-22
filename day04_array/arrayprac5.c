// 5. 冒泡排序（必须手写，锻炼逻辑）
// 题目：输入 任意多 个整数，用冒泡排序从小到大排序并输出。
// 考察思维:1.双重循环  2.交换逻辑  3.排序思想
// 如：1 5 2 8 3 6 4 7 9
/* 我是这么想的，一层循环来排序，一层用来控制循环次数；但是，该怎么来判断是否排好了呢？这里陷入瓶颈了。。。

   而且，冒泡排序我没怎么学过。
   所以，我想用一层循环来判断是否数组的每个元素都是排好的
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("input a n:");
    scanf("%d",&n);
    if (n<=0)
    {
        printf("n为正整数才有效！");
        return 1;
    }

    int* arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        printf("分配内存失败！\n");
        return 1;
    }

    int i;
    printf("输入元素：");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int j;
    for ( j = 0; j < n-1; j++)
    {
        int k,temp;
        for (k = 0; k < n-j-1; k++)
        {
            if (arr[k]>arr[k+1])
            {
                temp = arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }

    printf("冒泡排序：");
    int m;
    for (m = 0; m < n; m++)
    {
        printf("%d ",arr[m]);
    }
    
    free(arr);
    return 0;
}

/*
冒泡排序优化(已经执行):

    1.外层循环只需 n-1 次，因为 n 个数最多 n-1 轮就能排好。

    2.内层循环可以每轮减少一次比较（因为每轮会把最大的数移到末尾），即内层条件改为 k < n - j - 1。

    3.可以添加一个标志变量 swapped，若某一轮没有发生交换，说明已经有序，提前结束排序。
*/