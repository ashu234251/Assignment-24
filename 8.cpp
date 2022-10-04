// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

#include<iostream>
using namespace std;

float area(int);
int area(int,int);
int area(float,float);
int main()
{
    int r;
    cout<<"Enter Radius of Circle: ";
    cin>>r;
    cout<<"Area of Circle is: "<<area(r)<<endl;

    int l,b;
    cout<<"Enter Length and Breadth of Rectangle: "<<endl;
    cin>>l>>b;
    cout<<"Area of Rectangle is: "<<area(l,b)<<endl;

    float base,h;
    cout<<"Enter Base and Height of Triangle: "<<endl;
    cin>>base>>h;
    cout<<"Area of Triangle is: "<<area(base,h);
}

float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
int area(float b,float h)
{
    return (b*h)/2;
}