#include<stdio.h>

void strcpySmallX(char * src, char * dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please enter the string : ");
    scanf("%[^'\n']s",Arr);

    strcpySmallX(Arr,Brr);

    printf("Copied string is %s\n",Brr);
    printf("Original string is %s\n",Arr);

    return 0;
}