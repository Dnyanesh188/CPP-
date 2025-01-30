#include<stdio.h>
#include<stdbool.h>

bool IsDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = IsDigit(cValue);

    if(bRet == true)
    {
        printf("There is digit\n",cValue);
    }
    else
    {
        printf("There is no digit\n",cValue);
    }

    return 0;
    
}