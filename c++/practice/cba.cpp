#include<iostream>
using namespace std;
int sum(int*,int*);
int main()
{
    int a,b,s;
    cout<<"Enter a=";
    cin>>a;
    cout<<"Enter b=";
    cin>>b;
    s=sum(&a,&b);
    cout<<"Sum s="<<s;
}
int sum(int*x,int*y)
{
    return(*x+*y);
}