#include <stdio.h>
#include <stdlib.h>
int l(char string[100])
{
    int n=0,i;
    for (i=1;i<=100;i++)
    {
        if (string[i] == '%')
        {
            break;
        }
        else
        {
            n++;
        } 
    }
    return n;
}
void main()
{
    char name[100];
    int lenght;
    printf("enter any word:\t");
    scanf("%s",&name);
    lenght = l(name);
    printf("the lenght is: %d",lenght);
    getchar();
}