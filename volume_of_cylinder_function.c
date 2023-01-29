#include <stdio.h>
#include <stdlib.h>
float volume(float radius , float height)
{
    float vol;
    vol = ((22/7) * radius * radius) * height;
    return vol;  
}
void main()
{
    float radius,height,ans;
    printf("enter radius and height of cylinder\n");
    scanf("%f%f",&radius,&height);
    ans = volume(radius,height);
    printf("volume is %.2f",ans);
    getchar();
}