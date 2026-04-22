// #include<stdio.h>
// //正序输出整数的各个位上的数
// int main()
// {
//     int n = 0,m=0;
//     printf("enter a number:");
//     scanf("%d",&n);

//     //1、无法实现位数上有0的情况
//     // int t = 0;
//     // //首先看逆序输出
//     // while (n!=0)
//     // {
//     //     t =t*10+ n%10;
//     //     n/=10;
//     // }
//     // printf("the %d result is:%d\n",n,t);

//     // while (t!=0)
//     // {
//     //     n = t%10;
//     //     t/=10;
//     //     printf("%d ",n);
//     // }

//     //2、可以实现位数上有0的情况
//     //x = 12345时，要得到1需要12345/10000=1；
//     //然后x%=10000->2345，2345/1000=2；
//     //接着x%=1000->345，345/100=3;
//     //x%=100->45，45/10=4;
//     //x%=10->5，5/1=5;
//     int cnt = 0;
//     int t = n;
//     do
//     {
//         t/=10;
//         cnt++;
//     } while (t>9);
//     printf("the result is:%d\n",cnt);

//     int first = 1;
//     while (cnt>0)
//     {
//         first *= 10;
//         cnt--;
//     }
    
//     while (first>0)
//     {
//         m=n/first;
//         printf("%d ",m);
//         n%=first;
//         first/=10;
//     }
//     return 0;
// }