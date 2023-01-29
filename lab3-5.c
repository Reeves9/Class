//WAP to print the series 2,4,6,8,....100
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i;
    for ( i = 1; i <= 100; i++)
    {
        if ((i % 2) == 0)
        {
            printf("%d\t",i);
        }
    }
    getchar();
}