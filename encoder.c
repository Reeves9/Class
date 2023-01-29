#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char text[20],res[20];
    int i,len;
    printf("enter any word\n");
    scanf("%s",text);
    len = strlen(text);
    printf("%d\n",len);
    for(i=0;i<len;i++)
    {
        res[i] = text[i]+10;
    }
    for(i=0;i<len;i++)
    {
        printf("%c",res[i]);
    }
    getchar();
}