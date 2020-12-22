#include <iostream>

using namespace std;

int power(int base,int expo)
{
    if(expo==0)
    {
        return 1;
    }
    if(expo%2==0)
    {
        return power(base*base,expo/2);
    }
    if(expo%2!=0)
    {
        return base*power(base*base,(expo-1)/2);
    }
}

int main()
{
    int bases,expos;
    cin>>bases;
    cin>>expos;
    
    cout<<"power: "<<power(bases,expos)<<endl;
}