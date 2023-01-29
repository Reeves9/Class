//WAP to print ascii value of A to Z
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char i;
    for (i='A';i<='Z';i++)
    {
        printf("%d\t",i);
    }
    getchar();
}