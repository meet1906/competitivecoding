/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<"Static all in stack :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    int *b[3];
    b[0]=new int(4);
    //*b[0]={1,2,3,4}
    b[1]=new int(4);
    //*b[1]={5,6,7,8};
    b[2]=new int(4);
    //*b[2]={9,10,11,12};
    //*b={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    cout<<"Array of pointers (1 in stack pointing to array in heap :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>b[i][j];
        }
        //cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Double pointers all in heap :"<<endl;
    int **c;
    c = (int **)malloc(3*sizeof(int));
    c[0]=(int *)malloc(4*sizeof(int));
    c[1]=(int *)malloc(4*sizeof(int));
    c[2]=(int *)malloc(4*sizeof(int));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>c[i][j];
        }
        //cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;    
}
