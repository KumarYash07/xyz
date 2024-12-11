#include<iostream>
using namespace std;
int main()
{
    void fun();
    cout<<"You are in main"<<endl;
    fun();
}
void fun()
{
    cout<<"You nare in fun";
}