#include<stdio.h>

void strcpyX(char * src, char * dest)
{
    while(* src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = *src;
}
int main()
{
    char Arr[20];
    char Brr[20];

    printf("enter the string : ");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("copied string is %s\n",Brr);

    return 0;
}