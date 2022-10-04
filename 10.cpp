// 10. Write functions using function overloading to add two numbers having different data types.

#include<iostream>
using namespace std;

int sum(int,int);
int sum(float,float);
int main()
{
    int a,b;
    cout<<"Enter Two Integer Numbers: "<<endl;
    cin>>a>>b;
    cout<<"Sum is: "<<sum(a,b);

    float c,d;
    cout<<endl<<"Enter Two Real Numbers: "<<endl;
    cin>>c>>d;
    cout<<"Sum is: "<<sum(c,d);

    return 0;
}

int sum(int a,int b)
{
    return a+b;
}
int sum(float a,float b)
{
    return a+b;
}
