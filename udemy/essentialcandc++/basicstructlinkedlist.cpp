#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int area(struct rectangle *r1) // pass the whole structure only.
{
    return r1->length*r1->breadth;
}

struct rectangle *fun()
{
    struct rectangle *q;
    q=new rectangle();
    q->length=11;
    q->breadth=11;
    return q;
}
int main()
{
    //cout<<"Hello World";
       // struct rectangle r;
        //r={10,5};
        struct rectangle *p=fun();
        cout<<area(p);
        
        
        return 0;
}
