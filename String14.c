#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        *str++;
    }
}
int main()
{
    char Arr[50];

    printf("Enter the string : ");
    scanf("%[^'\n']s",&Arr);

    struprX(Arr);

    printf("String after conversion is %s",Arr);

    return 0;
}