#include<iostream>
using namespace std;
int sqr(int);
int main()
{
    int a;
    cout<<"Enter a=";
    cin>>a;
    int b=sqr(a);
    cout<<"Square is "<<b;
}
int sqr(int x)
{
    return(x*x);
}