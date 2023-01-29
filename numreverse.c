#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num , hld , ans;
    printf("entr any number\n");
    scanf("%d",&num);
    ans = 0;
    while (num > 0)
    {
        hld = num % 10;
        ans = ans * 10 + hld;
        num = num / 10;
    }
    printf("The reverse id %d",ans);
    getchar();
}