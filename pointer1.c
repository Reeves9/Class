// test of pointer and it's output
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num = 25, *pnt;
    pnt = &num;
    printf("value of num %d\n",num);
    printf("value of &num %u\n",&num);
    printf("value of pnt %u\n",pnt);
    printf("value of &pnt %u\n",&pnt);
    printf("value of *pnt %u\n",*pnt);
    getchar();
}