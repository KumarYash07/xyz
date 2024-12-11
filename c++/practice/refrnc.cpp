#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int &y=x;
    int c=y+10;
    cout<<"Ans = "<<c;
     return 0;
}

