#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    //a[0]=1;
    //a[1]=2;
    //a[2]=3;
    //a[3]=4;
    //a[4]=5;
    cout<<sizeof(a)<<endl;
    //latest compiler takes 4 bytes 
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        cout<<endl;
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
        cout<<endl;
    }
    return 0;
}