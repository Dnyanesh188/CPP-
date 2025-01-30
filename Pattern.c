#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter how many times you want to display :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}