#include <stdio.h>
#include <stdlib.h>
void main()
{
    int hld = 1,i;
    for ( i = 2; i < 20; i += 2)
    {
        hld = hld * i;
    }
    printf("answer is %d",hld);
    getwchar();

}