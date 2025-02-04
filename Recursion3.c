#include<stdio.h>

void printing(int n)
{
    if(n == 0)
    {
        return;
    }
    
    printf("%d\n",n);

    
}
int main()
{
    int n = 0;

    printf("Enter the number : ");
    scanf("%d",&n);

    printing(n);

    return 0;
}