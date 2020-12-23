/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

// TAYLOR SERIES
//E^X = 1 +X/1! +X^2/2! + ...... X^N/N!

int func(int x,int n)
{
    static int p=1,f=1;
    if(n==0)
    {
        return 1;
    }
    int r;
    r=func(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
    
}

int main()
{
    //cout<<"Hello World";
    cout<<func(1,10);
    
    return 0;
}
