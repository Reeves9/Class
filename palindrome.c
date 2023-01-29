#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num , hld , ans , numx;
    printf("entr any number\n");
    scanf("%d",&num);
    ans = 0;
    numx = num;
    while (num > 0)
    {
        hld = num % 10;
        ans = ans * 10 + hld;
        num = num / 10;
    }
    if (numx == ans )
    {
        printf("it is a palindrome\n");
    }
    else 
    {
        printf("it is not a palindorme\n");
    }
    getchar();
}