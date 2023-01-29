// wap to ask n numbers and print them
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr ,i ,n;
    printf("how many numbers?\n");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int)); //int* assigns base address to the ptr pointer
    printf("enter %d numbers",n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("the entered numbers are:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",*ptr+i);
    }
    free(ptr);
    getchar();
}