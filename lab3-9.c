// wap to get x and y and find x ^ y
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int x , y , i, ans = 1;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);
    for (i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    printf("answer is %d",ans);
    getchar();
}