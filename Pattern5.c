#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);

    }

    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter how many times you want to print : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}