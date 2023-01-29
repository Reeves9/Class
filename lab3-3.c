//wap to generate multiplication table of any entered number
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num, i;
    printf("enter any number:\t");
    scanf("%d",&num);
    for ( i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    getchar();
}
