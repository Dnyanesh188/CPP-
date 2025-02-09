#include<iostream>
using namespace std;

void SayDigit(int n, string arr[])
{
    //base Case
    if(n == 0)
    {
        return;
    }

    //preprocessing
    int digit = n %  10;
    n = n / 10;

    // Recursive Call
    SayDigit(n,arr);

    cout<< arr[digit] << " ";
}
int main()
{
    string  arr[10] = {"Zero", "One", "Two", "Three","Four","Five","Six","Seven","Eight","Nine"};

    int n;
    cout<<"please enter a number ";
    cin>>n;

    cout<< endl << endl << endl;

    SayDigit(n, arr);

    cout<< endl << endl << endl;
}