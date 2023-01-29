#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,hld = 0,i;
    printf("enter the lenght of loop");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        hld += i;    
    }

    printf("answer is %d",hld);
    getwchar();

}