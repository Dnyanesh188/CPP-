#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;

}
int main()
{
    int *ptr = NULL;
    int i = 0;
    int iLength = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of elements you want to insert:\n");
    scanf("%d",&iLength);

    ptr =(int *)malloc(iLength * sizeof(int));

    printf("Enter the elements :\n ");
    
    for(i = 0; i < iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter which element frequency you want :\n");
    scanf("%d",&iValue);

    iRet = CountFrequency(ptr,iLength,iValue);

    printf("The frequency of %d is  %d",iValue,iRet);

    free(ptr);

    return 0;

    
}