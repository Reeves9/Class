#include <stdio.h>
#include <stdlib.h>
int SI(int p , int t,float r)
{
    int I;
    I = (p * t * r)/100;
    return I;
}
void main()
{
    int p,t;
    float r,ans;
    printf("enter principle years and rate\n");
    scanf("%d%d%f",&p,&t,&r);
    ans = SI(p,t,r);
    printf("interest is %.2f",ans);
    getchar();
}