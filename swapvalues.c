#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a, b, c;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("%d %d",a,b);
    getchar();
}