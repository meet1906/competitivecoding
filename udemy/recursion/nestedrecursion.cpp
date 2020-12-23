#include <iostream>

using namespace std;
//void g(int n);
int f(int n)
{

    if(n>100)
    {
        return n-10;
        //f(n-1);
    }
    else
    {
        
        return f(f(n+11));
    }
}

int main()
{
    int a=111;
    //cin>>bases;
    //cin>>expos;
    int b=f(a);
    cout<<b;
    //A->B->A 
    //cout<<"power: "<<power(bases,expos)<<endl;
}