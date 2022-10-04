// 9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.

#include<iostream>
using namespace std;
void maximum(int,int);
void maximum(float,float);
int main()
{
   int a,b;
   cout<<"Enter Two Integers: "<<endl;
   cin>>a>>b;
   maximum(a,b);
   float c,d;
   cout<<"Enter Two Real Numbers: "<<endl;
   cin>>c>>d;
   maximum(c,d);
   return 0;
}
void maximum(int a,int b)
{
    if(a>b)
      cout<<a<<" is Maximum.";
    else if(a<b)
      cout<<b<<" is Maximum.";
    else
      cout<<"Both are Equal.";
    
    cout<<endl;
}
void maximum(float a,float b)
{
    if(a>b)
      cout<<a<<" is Maximum.";
    else if(a<b)
      cout<<b<<" is Maximum.";
    else
      cout<<"Both are Equal.";
}