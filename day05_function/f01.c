#include<stdio.h>
#include "sum.h"
extern int f;
int main()
{
    int a=5;
    int b=10;
    int c=sum(a,b);
    printf("%d\n",c);
    printf("%d\n",f);
    return 0;
}