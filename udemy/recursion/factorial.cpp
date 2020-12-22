#include <iostream>

using namespace std;

int fact(int n)
{
    int fact1=1;
    if(n>0)
    {
        fact1=n*fact(n-1);
    }
    return fact1;
}

int main()
{
    int n1;
    cin>>n1;
    cout<<"Factorial: "<<fact(n1)<<endl;
}