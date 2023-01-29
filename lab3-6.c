// WAP to accept a number and tell if it is prime or composite
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num,i,fact = 0;
    printf("enter any number\n");
    scanf("%d",&num);
    for ( i = 1; i < num; i++ )
    {
        if ((num % i) == 0)
        {
            fact++;
        }
    }
    if (fact > 2)
    {
        printf("Composite");
    }
    else
    {
        printf("Prime");
    }
    getchar();
}