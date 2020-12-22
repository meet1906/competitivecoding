#include <iostream>

using namespace std;
//By call

int y=0; //global var declar

//static 
int sfunc(int n)
{
    static int z=0;
    if(n>0)
    {
        z++;
        return (sfunc(n-1)+z);
        //y++;
    }
}

//global
int gfunc(int n)
{
   // static int z=0;
    if(n>0)
    {
        //z++;
        y++;
        return (gfunc(n-1)+y);
    }
}

//normal
int rfunc(int n)
{
    //static int z=0;
    if(n>0)
    {
        //z++;
        return (rfunc(n-1)+n);
    }
}

int main()
{
    int a=5;
    cout<<"Global : "<<gfunc(a)<<endl;
    cout<<"Normal : "<<rfunc(a)<<endl;
    cout<<"Static : "<<sfunc(a)<<endl;
    return 0;
}