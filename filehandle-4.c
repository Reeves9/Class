// create a structure named employee having members empname,age and salary. use this structure toread the name age and salary of emplayee and write entered enformation to a file named employee.dat in d:
#include <stdio.h>
#include <stdlib.h>
void main()
{
    struct employee
    {
        char empname[20];
        int age, salary;
    }e;
    printf("enter name age and salary of the employee:\n");
    scanf("%s%d%d",e.empname,&e.age,&e.salary);
    FILE *fp;
    fp = fopen("~/home/reeshav/employee.dat","wb");
    fwrite(&e,sizeof(e),1,fp);
    fclose(fp);
    getcahr();
}