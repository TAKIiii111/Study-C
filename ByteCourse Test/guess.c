/*猜数字游戏*/

#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
    //菜单栏
    printf("-----猜数字游戏-----\n");
    printf("-----0.开始游戏-----\n");
    printf("-----1.退出游戏-----\n");
    printf("请输入你的选择:>");
}

void game()
{
    //生成随机数
    int r = rand()%100+1;
    //开始游戏
    int g = 0;
    printf("请输入猜测的数字:>");
    while (1)
    {
        scanf("%d",&g);
        if (g > r)
        {
            printf("大了！\n");
            printf("请重新输入:>");
        }else if (g < r)
        {
            printf("小了！\n");
            printf("请重新输入:>");
        }else{
            printf("恭喜你，猜对了！\n");
            break;
        }
    }
}

int main()
{
    //随机数种子
    srand((unsigned)time(NULL));
    while (1)
    {
        //选项变量
        int choose = 0;
        //菜单栏
        replay:
        menu();
        //输入选项
        scanf("%d",&choose);
        if (choose == 0)
        {
            game();
        }else{
            printf("退出游戏成功\n");
            break;
        }
    }
    return 0;
}