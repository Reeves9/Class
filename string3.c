// wap to ask any 10 strings and arrange them in alphabetical order
#include <stdio.h>
#include <string.h>
void main()
{
    char text[10][20],temp[20];
    int i,j;
    printf("enter any 10 strings\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",text[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(text[i],text[j])>0)
            {
                strcpy(temp,text[i]);
                strcpy(text[i],text[j]);
                strcpy(text[j],temp);
            }
        }
    }
    printf("the alphabet order is\n");
     for(i=0;i<10;i++)
    {
        printf("%s\n",text[i]);
    }
}