/*
 7. 两个有序数组合并为一个有序数组
题目：已有两个从小到大排好序的数组（各5个元素），
合并成一个仍然有序的数组。
例如：
A = [1,3,5]
B = [2,4,6]
合并 = [1,2,3,4,5,6]

考察思维
 双下标遍历
 比较选择
 归并思想入门
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[]= {1,3,5,7,9};
    int B[]= {2,4,6,8,10};
    int n,indexA,indexB;
    indexA = sizeof(A)/sizeof(int);
    indexB = sizeof(B)/sizeof(int);
    n = sizeof(A)/sizeof(int)+sizeof(B)/sizeof(int);
    // {
    //     printf("%d\n",n);
    // }//测试代码：是否将A+B的元素个数完全分配给n

    if (n<0)
    {
        printf("wrong n!\n");
        return 1;
    }
    
    int* arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        printf("内存分配失败！\n");
        return 1;
    }

    int i=0,j=0,k=0;
    while ( i<indexA && j<indexB )//看过之后惊讶于其精简度，为啥我写的时候没想到
    {
        if ( A[i] < B[j])
            arr[k++] = A[i++];
        else
            arr[k++] = B[j++];
    }
    while (i<indexA){ arr[k++] = A[i++]; }
    while (j<indexB){ arr[k++] = B[j++]; }
    
    int m;
    for ( m = 0; m < n; m++)
    {
        printf("%d ",arr[m]);
    }
    
    free(arr);
    return 0;
}