// wap to append some text to a certain file. take file name from the user.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char name[20];
    char text[100];
    printf("enter file name\n");
    scanf("%s",name);
    fp = fopen(name,"a");
    printf("enter text\n");
    scanf("%s",text);
    fprintf(fp,"%s",text);
    fclose(fp);
    getchar();
}