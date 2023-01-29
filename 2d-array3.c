// wap to find the transpose of a matrix
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int mat[10][10],tran[10][10],i,j,row,column;
    printf("enter the number of rows and columns\n");
    scanf("%d%d",&row,&column);
    printf("enter the %d x %d matrix\n",row,column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            tran[i][j] = mat[j][i];
        }
    }
    printf("the transpose matrix is \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",tran[i][j]);
        }
        printf("\n");
    }
    getchar();
}