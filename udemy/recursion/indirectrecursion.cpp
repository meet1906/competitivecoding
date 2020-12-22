#include <iostream>

using namespace std;
void g(int n);
void f(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        g(n-1);
        //f(n-1);
    }
}
void g(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        f(n/2);
        
    }
}
int main()
{
    int a=20;
    //cin>>bases;
    //cin>>expos;
    f(a);
    //A->B->A 
    //cout<<"power: "<<power(bases,expos)<<endl;
}