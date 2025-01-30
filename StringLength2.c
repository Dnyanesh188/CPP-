#include<stdio.h>

int strlen(char *str)
{
    int iCnt = 0;
    int i = 0;

    while(str[i] != '\0')
    {
        iCnt++;
        i++;
    }
    return iCnt;
}
int main()
{
    char Arr[25];
    int iRet = 0;

    printf("Please enter the string : ");
    scanf("%[^'\n']s",Arr);

    iRet = strlen(Arr);

    printf("The number of letters in string are %d",iRet);

    return 0;
}