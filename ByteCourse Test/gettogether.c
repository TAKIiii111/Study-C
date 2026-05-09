//编写代码，演示多个字符从两端移动，向中间汇聚
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char arr1[20]="**********";
    char arr2[20]="I Love You";

    int left = 0;
    int right = strlen(arr1) - 1;
    
    while (left <= right)
    {
        arr1[left] = arr2[left];
        arr1[right] = arr2[right];
        printf("%s\n",arr1);
        Sleep(1000);
        system("cls");
        left++;
        right--;
    }
    
    return 0;
}