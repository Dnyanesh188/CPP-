#include<stdio.h>
#include<stdbool.h>

bool isprime(int num)
{
    if(num <= 1)
    {
        return false;
    }

    for(int i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    int num = 0;

    printf("Please enter the positive number : ");
    scanf("%d",&num);

    if(isprime(num))
    {
        printf("%d is a prime number\n",num);
    }
    else
    {
        printf("%d is not a prime number\n",num);
    }

    return 0;
    
}