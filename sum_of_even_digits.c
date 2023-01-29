#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,hld,ans = 0,num;
    printf("enter any number");
    scanf("%d",&num);
    while (num >0)
    {
        hld = num % 10;
        if((hld % 2) == 0)
        {
        ans = ans + hld;
        }
        num = num / 10;
    }
    printf("answer is %d",ans);
    getwchar();
    

}