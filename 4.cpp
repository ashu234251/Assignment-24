// 4. Define a function to print Pascal Triangle up to N lines.

#include<iostream>
using namespace std;

void pascal(int);
int fact(int);
int comb(int,int);
int main()
{
    int n;
    cout<<"Enter Value of N: ";
    cin>>n;
    pascal(n);
    return 0;
}

void pascal(int n)
{
  int i,j;
  for(i=0;i<=n-1;i++)
   {
    for(j=0;j<=n-i-2;j++)
     {
        cout<<" ";
     }
    for(j=0;j<=i;j++)
    {
        cout<<comb(i,j)<<" ";
    }
    cout<<endl;
   }
}

int comb(int n,int r)
{
  return (fact(n)/(fact(r)*fact(n-r)));
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
     {
        fact=fact*i;
     }
     return fact;
}

// Doubt- Width modifier in C++. (As they were in C like %3d)