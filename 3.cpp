// 3. Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;

void power();
int main()
{
    power();
    return 0;
}

void power()
{
    int i,x,y;
    cout<<"Enter Value of x: ";
    cin>>x;
    cout<<"Enter Value of y: ";
    cin>>y;
    int z=x;
    for(i=0;i<y-1;i++)
    {
        z=z*x;
    }
    cout<<x<<" raised to power "<<y<<" is "<<z;
    
}