//wap to enter 10 numbers and find their sum
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num[10],i,sum=0;
    printf("Enter 10 numbers:\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum = sum + num[i];
    }
    printf("The sum is: %d",sum);
    getchar(); 
}