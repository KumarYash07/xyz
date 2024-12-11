#include<iostream>
using namespace std;
int area(int,int);
int main()
{
    int a,b;
    cout<<"Enter a=";
    cin>>a;
    cout<<"Enter b=";
    cin>>b;
    int c=area(a,b);
    cout<<"Area is "<<c;
}
int area(int l,int b)
{
    return(l*b);
}