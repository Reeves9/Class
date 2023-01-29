//wap to reverse a entered string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char text[20];
    printf("enter a word\n");
    scanf("%s",text);
    strrev(text);
    printf("%s",text);
    getchar();
}
