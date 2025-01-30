#include<stdio.h>
#include<stdbool.h>

bool IsCapitalX(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Chaacter : ");
    scanf("%c",&cValue);

    bRet = IsCapitalX(cValue);

    if(bRet == true)
    {
        printf("There is a capital letter\n",cValue);
    }
    else
    {
        printf("there is no capital letter\n",cValue);
    }

    return 0;
}