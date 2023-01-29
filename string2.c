// wap to ask a string and count the number of vowels and consonents in it
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char text[20];
    int i,len,vow=0,cons=0;
    printf("Enter a string\n");
    scanf("%s",text);
    len = strlen(text);
    strlwr(text);
    for(i=0;i<len;i++)
    {
        if(text[i] == 'a'||text[i] == 'e'||text[i] == 'i'||text[i] == '0'||text[i] == 'u')
        {
            vow++;
        }
        else 
        {
            cons++;
        }
    }
    printf("there are %d vowels and %d consonants ",vow,cons);
}