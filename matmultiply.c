// multiply a 2x3 and a 3x2 matrix
#include<stdio.h>    
#include<stdlib.h>  
int main()
{  
    int mat1[10][10],mat2[10][10],ans[10][10],i,j,k;       
    printf("enter the first matrix element\n");    
    for(i=0;i<2;i++)    
    {          
        for(j=0;j<3;j++)    
        {    
            scanf("%d",&mat1[i][j]);    
        }    
    }    
    printf("enter the second matrix element\n");    
    for(i=0;i<3;i++)    
    {    
        for(j=0;j<2;j++)    
        {    
            scanf("%d",&mat2[i][j]);    
        }    
    }    
    
    printf("multiply of the matrix\n");    
    for(i=0;i<2;i++)    
    {    
        for(j=0;j<3;j++)    
        {    
            ans[i][j]=0;    
            for(k=0;k<2;k++)    
            {    
                ans[i][j]+=mat1[i][k]*mat2[k][j];    
            }    
        }       
    }       
    for(i=0;i<2;i++)    
    {    
        for(j=0;j<2;j++)    
        {    
            printf("%d\t",ans[i][j]);    
        }    
        printf("\n");    
    }    
    return 0;  
}  