//wap to find the sum of all natural number upto n
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,n,sum = 0;
    printf("enetr n term\n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("the sum is %d",sum);
    getchar();
}