#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num , hld , ans , numx;
    printf("enter any number\n");
    scanf("%d",&num);
    numx = num;
    ans = 0;
    while (num > 0 )
    {
        hld = num % 10;
        ans = ans + (hld * hld * hld);
        num = num / 10;
    }
    if (numx == ans)
    {
        printf("it's a armstrong number\n");
    }
    else 
    {
        printf("it's not a armstrong number\n");
    }
    getchar();
}