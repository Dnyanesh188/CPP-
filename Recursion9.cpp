#include<iostream>
using namespace std;

int Sum(int Arr[], int size,int index = 0)
{
    if(index == size)
    {
        return 0;
    }
    else
    {
        return Arr[index] + Sum(Arr,size,index + 1);
    }
    
    
    
}
int main()
{
    int Arr[5] = {3, 2, 5, 1, 6};
    int size = 5;

    int Ans = Sum(Arr, size);

    cout<< Ans << endl;

    return 0;
}