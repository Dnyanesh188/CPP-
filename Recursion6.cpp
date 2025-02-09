#include<iostream>
using namespace std;

int CountClimb(int n)
{
    //base case
    if(n < 0)
    {
        return 0;
    }
    if(n == 0)
    {
        return 1;
    }

    //Recursive call
    int Ans = CountClimb(n -1) + CountClimb(n - 2);

    return Ans;

}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int Ans = CountClimb(n);

    cout<< Ans << endl;

    return 0;
}