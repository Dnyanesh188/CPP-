#include<stdio.h>

void strlwrX(char * str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        *str++;
    }
}
int main()
{
    char Arr[50];

    printf("enter the string : ");
    scanf("%[^'\n']s",&Arr);

    strlwrX(Arr);

    printf("String after conversion is %s\n",Arr);

    return 0;
}