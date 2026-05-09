// //计算1！+2！+3！+...+n!
// #include<stdio.h>
// int main()
// {
//     //键入n的值
//     int n = 0;
//     printf("input a n:>");
//     scanf("%d",&n);

//     //循环部分，完成阶乘和累加部分(我的初始版本，比较麻烦，且耗时)
//     // int i = 1,ret = 1,sum = 0;
//     // for ( i = 1; i <= n; i++)
//     // {
//     //     ret = 1;
//     //     int j = 1;
//     //     for ( j = 1; j <= i; j++)
//     //     {
//     //         ret *= j;
//     //     }
//     //     sum+=ret;
//     // }

//     //老师讲解的方法，个人觉得确实省时省事
//     int i = 1,ret = 1,sum = 0;
//     for ( i = 1; i <= n; i++)
//     {
//         ret *= i;
//         sum += ret;
//     }
    
//     printf("阶乘和为:%d",sum);
//     return 0;
// }
