#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a, b;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d",a,b);
    getchar();
}