// 5. Define a function to check whether a given number is a term in a Fibonacci series or not.

#include<iostream>
using namespace std;
int fibonacci(int);
int main()
{
    int n,i=0;
    cout<<"Enter a Number: ";
    cin>>n;
    
    while(n>fibonacci(i))
     {
        i++;
     }
    if(n==fibonacci(i))
      cout<<n<<" is "<<i+1<<" term of Fibonacci Series.";
    else 
      cout<<n<<" is not a term in Fibonacci Series.";
      
    return 0;
}

int fibonacci(int n)
{
     if(n==0 || n==1)
      return n;
     else
      return fibonacci(n-1)+fibonacci(n-2);

}



/*
void fibonacci(int n)
{
    int a[n],i;
    a[0]=1;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<n<<" Term is: "<<a[n-1];
}
*/