#include<stdio.h>

int squroot(int n)
{
    int ans = 0;
    
    while(n != 0)
    {
        ans = n % 10;
    }
    return ans;

}
int main()
{
    int n = 0;
    int iRet = 0;

    printf("Please enter number ");
    scanf("%d",&n);

    iRet = squroot(n);

    printf("Square root is %d\n",iRet);

    return 0;
}