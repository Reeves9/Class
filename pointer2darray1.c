// find the sum of elements of 3x3 matrix using pointer
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int (*ptr)[3],i,j,sum=0;
    printf("enter a 2x3 matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",*(ptr+i)+j);
            sum += (*(*(ptr+i)+j)); 
        }
    }
    printf("sum is %d",sum);
    getchar();
}