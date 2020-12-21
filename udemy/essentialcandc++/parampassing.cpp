/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

/*
//Call by Value
void swap(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"After Swapping in function swap - "<<endl<<"A="<<x<<endl<<"B="<<y<<endl;
}

int main()
{
    //cout<<"Hello World";
    int a,b;
    a=10;
    b=5;
    cout<<"Before Swapping"<<endl<<"A="<<a<<endl<<"B="<<b<<endl;
    swap(a,b);
    cout<<"After Swapping in Main"<<endl<<"A="<<a<<endl<<"B="<<b<<endl;
    return 0;
}
*/
/*
//Call By Address
void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    cout<<"After Swapping in function swap - "<<endl<<"A="<<*x<<endl<<"B="<<*y<<endl;
}

int main()
{
    //cout<<"Hello World";
    int a,b;
    a=10;
    b=5;
    cout<<"Before Swapping"<<endl<<"A="<<a<<endl<<"B="<<b<<endl;
    swap(&a,&b);
    cout<<"After Swapping in Main"<<endl<<"A="<<a<<endl<<"B="<<b<<endl;
    return 0;
}
*/

//Call By Reference
void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"After Swapping in function swap - "<<endl<<"A="<<x<<endl<<"B="<<y<<endl;
}

int main()
{
    //cout<<"Hello World";
    int a,b;
    a=10;
    b=5;
    cout<<"Before Swapping"<<endl<<"A="<<a<<endl<<"B="<<b<<endl;
    swap(a,b);
    cout<<"After Swapping in Main"<<endl<<"A="<<a<<endl<<"B="<<b<<endl;
    return 0;
}

