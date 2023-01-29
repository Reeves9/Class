//wap to arrange numbers in accending order
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr ,i ,n,hld,j ;
    printf("how many numbers?\n");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int)); //int* assigns base address to the ptr pointer
    printf("enter %d numbers",n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(*(ptr+i) > *(ptr+j))
            {
                hld = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = hld;
            }
        }
    }
     for(i=0;i<=n;i++)
    {
        printf("%d\t",*ptr+i);
    }
    free(ptr);
    getchar();
}