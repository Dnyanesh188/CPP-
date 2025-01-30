#include<stdio.h>

int strlen(char *str)
{
    int iCnt = 0;
    int i = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        iCnt++;
    }
    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",&Arr);

    iRet = strlen(Arr);

    printf("Number of characters in string are %d",iRet);

    return 0;
}