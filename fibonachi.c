#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a = 5  , b = 4 , i , c;
    printf("%d\t%d\t",a,b);
    for (i=1;i<=8;i++)
    {
        c = a + b;
        printf("%d\t",c);
        a = b;
        b = c;
    }
    getwchar();
}