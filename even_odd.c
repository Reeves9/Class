#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num;
    printf("enter any number\n");
    scanf("%d",&num);
    if((num % 2) == 0)
    {
        printf("it is even\n");
    }
    else
    {
        printf("it is odd\n");
    }
    getchar();
}