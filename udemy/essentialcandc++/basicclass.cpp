/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class abc{
    int length;
    int breadth;
    public:
    
    abc()
    {
        length=10;
        breadth=10;
    }
    public:
    
    void area()
    {
        cout<<length*breadth;
    }
};


int main()
{
    //cout<<"Hello World";
    abc A;
    A.area();

    return 0;
}
