// wap to add any two 2x3 matrixes
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int mat1[2][3],mat2[2][3],sum[2][3],i,j;
    printf("enter first 2x3 matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter second 2x3 matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("the sum of the two matrises are\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    getchar();
}