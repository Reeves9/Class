#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sp, cp;
    printf("enter sp and cp:\t");
    scanf("%d%d",&sp,&cp);
    if(sp>cp)
    {
        printf("gain\n");
    }
    else if(cp > sp)
    {
        printf("loss\n");
    }
    else
    {
        printf("nneutral\n");
    }
    getchar();
}
