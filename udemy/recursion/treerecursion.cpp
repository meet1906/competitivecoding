#include <iostream>

using namespace std;

void f(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        f(n-1);
        f(n-1);
    }
}
int main()
{
    int a=5;
    //cin>>bases;
    //cin>>expos;
    f(a);
    //MAKE THAT TREE TO FIND THAT OUTPUT - YOU GOTTA TRACE IT 
    //cout<<"power: "<<power(bases,expos)<<endl;
}