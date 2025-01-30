#include<stdio.h>

int main()
{
    int n = 0;
    int first = 0;
    int second = 1;
    int next = 0;
    int i = 0;

    printf("Enter number of terms ");
    scanf("%d",&n);

    printf("fibonacci series : \n");

    for(i = 0; i < n; i++)
    {
        if(i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;    
        }
        printf("%d",next);
    }

    return 0;
}