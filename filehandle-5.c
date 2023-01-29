// create a structure named student that has name , roll , mark as members. assume appropriate types and size of member. use this structure to read and display records of 3 students. write array of structure to a file and then read it's content to display to the screen. 
#include <stdio.h>
#include <stdlib.h>
void main()
{
    struct student
    {
        char name[20];
        int roll , mark;
    }stud[3],studtemp[3];
    int i;
    FILE *fp;
    for(i=0;i<3;i++)
    {
        printf("enter name roll and mark of student:\n");
        scanf("%s%d%d",stud[i].name,stud[i].roll,stud[i].mark);
    }
    fp = fopen("record.txt","w+b");
    fwrite(%stud,sizeof(stud),3,fp);
    rewind(fp);
    fread(&studtemp,sizeof(studtemp),3,fp);
    printf("the records are:\n");
    for(i=0;i<3;i++)
    {
        printf("%s  %d  %d\n",studtemp[i].name,studtemp[i].roll,studtemp[i].mark);
    }
    getcahr();
}