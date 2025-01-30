#include<stdio.h>

int CountFrequency(char * str, char ch)
{
    int iCnt = 0;

    while(* str != '\0')
    {
        if(* str == ch)
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

    printf("Enter the string : ");
    scanf("%[^'\n']s",&Arr);

    iRet = CountFrequency(Arr,'a');

    printf("frequency of letter is %d\n",iRet);

    return 0;
}