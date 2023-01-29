//wap to ask 3 strings and find longest among them
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char text1[20],text2[20],text3[20];
    int len1,len2,len3;
    printf("enter first string\n");
    scanf("%s",text1);
    len1 = strlen(text1);
    printf("enter second string\n");
    scanf("%s",text2);
    len2 = strlen(text2);
    printf("enter third string\n");
    scanf("%s",text3);
    len3 = strlen(text3);
    if(len1 > len2 && len1 > len3)
    {
        printf("%s",text1);
    }
    if(len2 > len1 && len2 > len3)
    {
        printf("%s",text2);
    }
    if(len3 > len2 && len3 > len2)
    {
        printf("longest string is %s",text3);
    }
}   