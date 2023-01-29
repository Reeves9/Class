#include <stdio.h>
#include <stdlib.h>
void area()
{
    int l,b,a;
    printf("enter lenght and bredth\n");
    scanf("%d%d",&l,&b);
    a = l*b;
    printf("area is %d",a);
}
void main()
{
    area();
    getchar();
}
