/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;

int main()
{
    //cout<<"Hello World";
    //Normal Pointer
    /*int a=10;
    int *p; //declaration
    p=&a;
    printf("using pointer %d\n",*p);
    cout<<&p<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<a<<endl;*/
    
    //Pointer to Array
    
    //array in stack
    /*int a[5]={2,4,6,8,9};
    int *p;
    p=a;
    int *q=&a[0];
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<endl;
    }
    for(int i=0;i<5;i++)
    {
        cout<<(p+i)<<endl;
    }
    int *r;
    r=a;
    for(int i=0;i<5;i++)
    {
        cout<<r[i]<<endl;
    }*/
    
    //array in heap
    int *a;
    a=(int*)malloc(5*sizeof(int)); //C
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    int *r;
    r=new int(5); //C++
    for(int i=0;i<5;i++)
    {
        cin>>r[i];
    }
    
    for(int i=0;i<5;i++)
    {
        cout<<r[i]<<endl;
    }
    return 0;
    
    //Deallocate the dynamically assigned memory
    delete [] r; //-C++
    free(a); //- C
}
