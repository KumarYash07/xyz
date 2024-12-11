#include<iostream>
using namespace std;
int fib(int n)
{
    if (n<2)
    return n;
    else
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n,res;
    cout<<"Enter the term: ";
    cin>>n;
    res = fib(n);
    cout<<res;
}