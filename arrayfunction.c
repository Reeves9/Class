// wap to enter 10 numbers and find their sum using function
#include <stdio.h>
#include <stdlib.h>
int sum(int num[])
{
    int i,s=0;
    for(i=0;i<10;i++)
    {
        s += num[i];
    }
    return s;
}
void main()
{
    int num[10],i,ans;
    printf("enter any 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    ans = sum(num);
    printf("the sum is %d",ans);
    getchar();
}