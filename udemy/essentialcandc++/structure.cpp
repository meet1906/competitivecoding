#include <iostream>
#include<stdio.h>


using namespace std;

struct student
{
    int rollname;
    char firstname[20];
    char lastname[20];
    float cgpa;
    char grade[2];
};

int main()
{
    struct student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"Enter for Student :"<<i+1;
      cin>>s[i].rollname;
      cin>>s[i].firstname;
      cin>>s[i].lastname;
      cin>>s[i].cgpa;
      cin>>s[i].grade;
      cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        cout<<"Details of Student :"<<i+1;
      cout<<s[i].rollname;
      cout<<s[i].firstname;
      cout<<s[i].lastname;
      cout<<s[i].cgpa;
      cout<<s[i].grade;
      cout<<endl;
    }
    //int n;
    //cin>>n;
    //int a[n];
    //a[0]=1;
    //a[1]=2;
    //a[2]=3;
    //a[3]=4;
    //a[4]=5;
    cout<<sizeof(student)<<endl;
    //latest compiler takes 4 bytes 
    /*for(int i=0;i<5;i++)
    {
        cin>>a[i];
        cout<<endl;
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
        cout<<endl;
    }*/
    return 0;
}
