#include<stdio.h>

int CountSpace(char * str)
{
    int iCnt = 0;

    while(* str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        *str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter the string : ");
    scanf("%[^'\n']s",&Arr);

    iRet = CountSpace(Arr);

    printf("The number of white spaces are %d\n",iRet);

    return 0;
}