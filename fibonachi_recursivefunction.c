#include<stdio.h>
#include<stdlib.h>
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else 
    {
        return fibo(n-1) + fibo(n-2);
    }
}
void main()
{
    int n , i , ans;
    printf("enter the numb er of terms\t");
    scanf("%d",&n);
    for (i=0;i<=(n-1);i++)
    {
        ans = fibo(i);
        printf("%d\t",ans);
    }
    getchar();
}