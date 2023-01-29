#include <stdio.h>
#include <stdlib.h>
double factorial (float n);
void main()
{
    int n;
    float fact;
    printf("enter any number: ");
    scanf("%d",&n);
    fact = factorial(n);
    printf("\nfactorial is %.0lf",fact);
    getchar();
}
double factorial(float n)
{
    double fact;
    if (n<=1)
    {
        fact = 1;
        return fact;
    }
    else{
        fact = n * factorial(n-1);
        return fact;
    }
}