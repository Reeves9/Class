// a file named record.txt contains name,post and salary of few employees. wap to increase the salary of all employees by 10%.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *rfile,*tfile;
    char c,name[20],post[20];
    int sal;
    rfile = fopen("record.txt","r");
    tfile = fopen("temp.txt","w");
    while(c = fgetc(rfile) != EOF)
    {
        fscanf(rfile,"%s%s%d",name,post,&sal);
        fprintf(tfile,"%s%s%d",name,post,1.1*sal);
    }
    fclose(rfile);
    fclose(tfile);
    remove("record.txt");
    rename("temp.txt","record.txt")
    getchar();
} 