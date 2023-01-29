// wap to enter a 2x3 matrix and find the sum of it's elements
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int sum = 0,mat[2][3],i,j;
    printf("enter elements 2x3 matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum = sum + mat[i][j];
        }
    }
    printf("sum of the elements is %d",sum);
    getchar();
}