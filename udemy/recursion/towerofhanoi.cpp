/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

//TOWER OF HANOI using recursion

void toh(char S,char A,char D,int N)
{
    if(N>0)
    {
    toh(S,D,A,N-1);
    cout<<"Move disc from "<<S<<" to "<<D<<endl;
    toh(A,S,D,N-1);
    }
}


int main()
{
    int n;
    cin>>n;
    toh('S','A','D',n);
    
    cout<<endl<<"No of steps required is : "<<pow(2,n)-1;
    
    return 0;
}
