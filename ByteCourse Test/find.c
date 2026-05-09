//在一个有序数组中查找具体某个数值n（二分查找）
#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key = 0;
    printf("input a key:>");
    scanf("%d",&key);

    //定义各个位置的下标
    int left = 0,right = sizeof(arr)/sizeof(arr[0]) - 1;
    int mid = left + (right-left)/2;//可以防止溢出，妙不可言
    while (left <= right)
    {
        mid = left + (right-left)/2;
        if (key > arr[mid])
        {
            left = mid + 1;
        }else if (key < arr[mid])
        {
            right = mid - 1;
        }else{
            printf("找到了，下标为：%d\n",mid);
            break;
        }
    }
    if (left > right)
    {
        printf("找不到\n");
    }
    
    return 0;
}