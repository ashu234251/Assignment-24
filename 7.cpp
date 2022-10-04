// 7. Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
using namespace std;
int sum(int,int,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter Two Numbers: "<<endl;
    cin>>a>>b;
    cout<<"Sum of Two Numbers is: "<<sum(a,b)<<endl ;
    cout<<"Enter Third Number: ";
    cin>>c;
    cout<<"Sum is: "<<sum(a,b,c);
    return 0;
}

int sum(int a,int b,int c)
 {
    return a+b+c;
 }