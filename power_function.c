#include <stdio.h>
#include <stdlib.h>
int power(int num , int pwr)
{
    int ans=1,i;
    for (i = 1;i<=pwr;i++)
    {
        ans = ans * num;
    }
    return ans;
}
void main()
{
    int num,pwr,ans;
    printf("enter number and its power\n");
    scanf("%d%D",&num,&pwr);
    ans = power(num,pwr);
    printf("answer is %d",ans);
    getchar();
}