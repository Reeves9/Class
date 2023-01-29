#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,ans=0,j;
    for(i=1;i<=100;i++)
    {
        ans = 0;
        for (j = 1;j<=i;j++)
            {
            if (i % j == 0)
                {
                    ans = ans +1;
                }
            }
         if (ans <= 2)
            {
                printf("%d\t",i);
            }
    }
   
    getchar();
}