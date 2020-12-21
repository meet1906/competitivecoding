/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
// structure call by value
/*
struct rectangle
{
    int length;
    int breadth;
};

int area(struct rectangle r1) // pass the whole structure only.
{
    return r1.length*r1.breadth;
}
int main()
{
    //cout<<"Hello World";
        struct rectangle r;
        r={10,5};
        cout<<"Area"<<area(r);
        
        
        return 0;
}
*/
// structure call by reference
/*struct rectangle
{
    int length;
    int breadth;
};

int area(struct rectangle &r1) // pass the whole structure only.
{
    r1.length++;
    return r1.length*r1.breadth;
}
int main()
{
    //cout<<"Hello World";
        struct rectangle r;
        r={10,5};
        cout<<"Area"<<area(r);
        
        
        return 0;
}
*/
// structure call by address
struct rectangle
{
    int length;
    int breadth;
};

int area(struct rectangle *r1) // pass the whole structure only.
{
    return r1->length*r1->breadth;
}
int main()
{
    //cout<<"Hello World";
        struct rectangle r;
        r={10,5};
        cout<<"Area"<<area(&r);
        
        
        return 0;
}
