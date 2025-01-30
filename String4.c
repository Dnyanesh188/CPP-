#include<stdio.h>

int CountCh(char *str)
{
    int iCnt = 0;
    

    while(*str != '\0')
    {
        if(*str == 'a')
        {
            iCnt++;
        }
        *str++;
    }
    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",&Arr);

    iRet = CountCh(Arr);

    printf("Frequency of a in string is %d",iRet);

    return 0;
}