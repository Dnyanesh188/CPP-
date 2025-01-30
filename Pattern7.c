#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'p';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("How many times you want to print : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}