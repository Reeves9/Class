// wap that opens a file and copies all it's content to another file. take source and destination file from the user.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *sfile,*dfile;
    char name1[20],name2[20],text;
    printf("enter the source file name\n");
    scanf("%s",name1);
    printf("enter the destination file name\n");
    scanf("%s",name2);
    sfile = fopen(name1,"r");
    dfile = fopen(name2,"w");
    while(text = fgetc(sfile) != EOF)
    {
        fputc(text,dfile);
    }
    fclose(sfile);
    fclose(dfile);
    getchar();
}