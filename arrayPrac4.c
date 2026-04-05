/*
 4. 判断数组是否对称（回文数组）
题目：输入 任意 个整数，判断这个数组是不是对称数组。
对称例子：1 2 3 2 1
不对称例子：1 2 3 4 5

考察思维
 对称下标关系
 提前终止判断
 逻辑判断思维
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //动态分配数组内存
    int n;
    printf("input a n:");
    scanf("%d",&n);
    //判断n有效性
    if (n <= 0)
    {
        printf("n必须为正整数!\n");
        return 1;
    }
    //判断n有效性

    int* arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        printf("内存分配失败");
        return 1;
    }
    //动态分配数组内存

    //输入数组元素
    int i;
    printf("请输入数组元素：");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //输入数组元素

    //判断是否为回文数组
    /*数组对称位置的元素相等 -> 继续判断  ，  else -> return false*/
    int j=0,k;
    k=n-1;
    while (j<k)
    {
        if (arr[j]==arr[k])
        {
            j++;
            k--;
        }
        else{
            printf("False\n");
            free(arr);
            return 0;
        }
    }
    //判断是否为回文数组
        
    printf("True\n");
    free(arr);//释放内存
    return 0;
}


/*
1. 内存泄漏
当数组不对称时，代码执行 return 0; 直接退出，跳过了 free(arr);，导致动态分配的内存未被释放。
改进：在 return 前先释放内存，或使用统一的清理逻辑。
我的解决：else{
                printf("False\n");
                free(arr);
                return 0;
            }

2. 未检查 malloc 返回值
动态内存分配可能失败（如内存不足），代码未检查 arr 是否为 NULL，直接使用会导致程序崩溃。
改进：添加 if (arr == NULL) { printf("内存分配失败\n"); return 1; }。
我的解决：已加入上述判断语句

3. 输入 n 的合法性未验证
若用户输入负数或零（n==0 已单独处理，但 n<0 未处理），malloc 会出错或行为未定义。
改进：添加 if (n <= 0) { printf("数组长度必须为正整数\n"); return 1; }。
我的解决：if (n <= 0)
    {
        printf("n必须为正整数!\n");
        free(arr);
        return 1;
    }

4. 输出格式不友好
printf("True") 和 printf("False") 没有换行，输出可能与其他内容连在一起。
改进：添加 \n，如 printf("True\n");。
我的解决：已添加\n

5. 判断逻辑可读性差
使用 while(1) 和 j == n/2 的条件，虽能工作，但不够直观。特别是偶数长度时，j 会超过 k 才满足条件，容易误解。
改进：使用标准的双指针法 while (j < k)，更清晰且不易出错。
我的解决：

6. 不必要的调试输出
每次相等时都打印 j 和 k 的值，这不是最终程序应有的行为。
改进：删除调试输出，或仅在调试版本中保留。
*/