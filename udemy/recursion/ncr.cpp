/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

//ncr using recursion

int c(int n,int r)
{
    if(r==0||n==r)
    {
        return 1;
    }
    else
    {
        return (c(n-1,r-1)+c(n-1,r));
    }
}


int main()
{
    int n=5;
    int r=2;
    int res;
    res=c(n,r);
    cout<<res<<endl;
    
    return 0;
}
