//WAP to find all prime numbers from 1 to 100
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i , j , num ,fact;
    for (i = 1 ; i <= 100 ; i++)
    {
        fact = 0;
        for ( j = 0; j <= i ; j++)
        {
            if ((i % j) == 0)
            {
                fact++;
            }
        }
        if (fact <= 2)
        {
            printf("%d\t",i);
        }
    }
}