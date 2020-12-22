#include <iostream>

using namespace std;

int sum(int n)
{
    int sum1=0;
    if(n>0)
    {
        sum1=n+sum(n-1);
    }
    return sum1;
}

int main()
{
    int n1;
    cin>>n1;
    cout<<"Sum: "<<sum(n1)<<endl;
}