#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num1,num2,hcf,i,max,lcm;
    printf("enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        max = num2;
    }
    else 
    {
        max = num1;
    }
    for (i=1;i<=max;i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("hcf is %d\t",hcf);
    lcm = (num1 * num2) / hcf;
    printf("lcm is %d\t",lcm);
    getchar();
}