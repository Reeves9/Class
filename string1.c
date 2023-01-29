// wap to ask a string and check if it is palindrome or not
#include <stdio.h>
#include <string.h>
void main()
{
    char text[20],pxy[20];
    int comp;
    printf("enter a string\n");
    scanf("%s",text);
    strcpy(pxy,text);
    strrev(text);
    comp = strcmp(pxy , text);
    if(comp == 0)
    {
        printf("palindrome\n");
    }
    else 
    {
        printf("not palindrome\n");
    }
}