#include<stdio.h>
void main()
{
    int num[]={4,5,2,7,1};
    int cnt=0;
    int sum=0;
    while (num[cnt] != '\0')
    {
        sum+=num[cnt];
        cnt++;
    }

    int average = 0;
    average= sum/cnt;
    printf("The average is: %d\n", average);
    int i=0;
    for (int i = 0; i <= cnt; i++)
    {
        if (num[i]>average)
        {
            printf("%d ", num[i]);
        }
        
    }
    
    
    

}
