#include <iostream>
#include<stdio.h>
#include<stdlib.h>

/*struct rectangle
{
    int length;
    int breadth;
};*/
using namespace std;

int main()
{
    int a=10;
    //int &p; // will throw error as reference should always be initialized
    int &r=a;
    cout<<r<<endl;
    cout<<a<<endl;
    ++a;
    cout<<r;
    ++r;
    cout<<a;
}
