#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num, i,ans=1;
    printf("enter any number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        ans = ans * i;
    }
    printf("factorial is %d",ans);
    getchar();
}