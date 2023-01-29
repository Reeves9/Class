// test for adress of memory
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num = 25, *pnt,i;
    pnt = &num;
   for ( i = 0; i < 100; i++)
   {
    printf("%u\t",pnt);
    pnt++;
   }
    getchar();
}