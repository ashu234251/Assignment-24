// 6. Define a function to swap data of two int variables using call by reference

#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
    int a,b;
    cout<<"Enter Two Numbers: "<<endl;
    cin>>a>>b;
    swap(a,b);
    return 0;
}

void swap(int &p1,int &p2)
{
  p1=p1+p2;
  p2=p1-p2;
  p1=p1-p2;   
  cout<<"First Value is: "<<p1<<endl;
  cout<<"Second Value is: "<<p2;
}

/*
int &p=a;
Now, till the completion of the program p will point to a, *(EVEN p WILL HAVE THE VALUE OF a.)
*/