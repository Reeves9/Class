//wap to ask any 10 numbers and find the gratest and smallest among them
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num[10],i,greatest,smallest;
    printf("enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    smallest = num[0];
    greatest = num[0];
     for(i=0;i<10;i++)
    {
        if (greatest <= num[i])
        {
            greatest = num[i]; 
        }
        if (smallest >= num[i])
        {
            smallest = num[i]; 
        }
    }
    printf("Greatest is %d\n",greatest);
    printf("Smallest is %d\n",smallest);
    getchar();
}