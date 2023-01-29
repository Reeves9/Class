// wap to find average of five subjects using pointer and array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int marks[5],i,sum,avg;
    printf("enter marks of five subject");
    for(i=0;i<5;i++)
    {
        scanf("%d",marks+i);
        sum = sum +(*(marks+i));
    }
    avg = sum / 5;
    printf("average is %d",avg);
    getchar();
}
