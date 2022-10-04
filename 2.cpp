// 2. Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;

int highest_digit(long int);
int main()
{
    long int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"Highest Digit in "<<n<<" is "<<highest_digit(n);
    return 0;
}

int highest_digit(long int n)
{
    int d,h=0;
    while(n!=0)
     {
       d=n%10;
       if(d>h)
        h=d;
       n=n/10;
     }
     return h;
}