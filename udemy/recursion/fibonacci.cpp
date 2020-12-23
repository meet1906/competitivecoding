/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

// FIBONACCI SERIES
//0 1 1 2 3 5 8 13 21 34 55 .....

//WITHOUT RECURSION
int main()
{
    //cout<<"Hello World";
    int a=0,b=1,c=0;
    int n;
    cin>>n;
    cout<<c<<"\t";
    for(int i=2;i<=n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        cout<<c<<"\t";
    }
    
    return 0;
}
