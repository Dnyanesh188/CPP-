#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("\t%d",iCnt);
        printf("\t*");
    }
}
int main()
{
    int iValue = 0;

    printf("how many times you want to print : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}