#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num,i,ans=0;
    printf("enter any number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if (num % i == 0)
        {
            printf("%d\n",i);
        }

    }
    getwchar();
}