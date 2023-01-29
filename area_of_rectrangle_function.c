#include <stdio.h>
#include <stdlib.h>
int area()
{
    int area,len,bth;
    printf("enter length and breadth of rectrangle\n");
    scanf("%d%d",&len,&bth);
    area = len * bth;
    return area;
}
void main()
{
    int ans;
    ans = area();
    printf("area is: %d",ans);
    getchar();
}