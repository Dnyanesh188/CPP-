#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        printf("%d\t",Arr[iCnt]);
    }
}
int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;

    printf("Enter Number of elements you want to store :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter The elements you want:\n");
    {
        for(i= 0; i < iLength; i++)
        {
            scanf("%d",&ptr[i]);
        }
    }

    DisplayReverse(ptr,iLength);

    free(ptr);

    return 0;
}