//  2. 出现次数最多的数字
// 题目：输入 10 个整数，找出数组中出现次数最多的数。
// 如果多个数次数相同，输出任意一个即可。

#include<stdio.h>
#define cnt 10

int main()
{
    // 定义一个数组来存储输入的整数(这一部分不会出现问题)
    int num[cnt] = {0};
    printf("请输入10个整数:\n");
    int i;
    for ( i = 0; i < cnt; i++)
    {
        scanf("%d", &num[i]);
    }
    

    //这是程序的关键部位，需要好好思考怎么处理
    int MaxCount = 0; // 最大出现次数
    int MaxNum = num[0]; // 出现次数最多的数字，初始为第一个数字
    int j,k;
    for (j = 0; j < cnt; j++)
    {
        int count = 0; // 当前数字出现的次数
        for ( k = 0; k < cnt; k++)
        {
            if (num[j] == num[k])
            {
                count++;
            }
        }
        if (count > MaxCount)
        {
            MaxCount = count;
            MaxNum = num[j];
        }
    }
    printf("出现次数最多的数字是: %d\n\
        一共出现 %d 次", MaxNum, MaxCount);
    return 0;
}