/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    //cout<<"Hello World";
    struct rectangle r={10,5}; //stack
    cout<<r.length<<endl<<r.breadth;
    struct rectangle *p;
    int area;
    p=(struct rectangle *)malloc(sizeof(struct rectangle));//heap
    p->length=10;
    p->breadth=20;
    area=p->length*p->breadth;
    cout<<area;
    
    
    return 0;
}
