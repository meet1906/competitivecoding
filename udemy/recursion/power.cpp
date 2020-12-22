#include <iostream>

using namespace std;

int power(int base,int expo)
{
    int powe=1;
    if(expo>0)
    {
        powe=base*power(base,expo-1);
    }
    return powe;
}

int main()
{
    int bases,expos;
    cin>>bases;
    cin>>expos;
    
    cout<<"power: "<<power(bases,expos)<<endl;
}