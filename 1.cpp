// 1. Define a function to check whether a given number is a Prime number or not.

#include<iostream>
using namespace std;

void prime(int);
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    prime(n);
    return 0;
}

void prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
         {
          cout<<n<<" is not a Prime Number.";
          break;
         }
    }
    if(i>n/2)
     cout<<n<<" is a Prime Number.";
}