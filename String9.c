#include<stdio.h>

char ToUpperX(char ch)
{
    return ch - 32;
}
int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Please enter the character : ");
    scanf("%c",&cValue);

    cRet = ToUpperX(cValue);

    printf("Character int he upper case is %c\n",cRet);

    return 0;
}