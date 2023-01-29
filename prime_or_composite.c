#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num,i,ans=0;
    printf("enter any number\t");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if (num % i == 0)
        {
            ans = ans +1;
        }

    }
    if (ans > 2)
    {
        printf("composite");
    }
    else
    {
        printf("prime");
    }
    getchar();
}