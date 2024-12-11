#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter ch: ";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"UPPERCASE\n";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"LOWERCASE\n";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"DIGITS\n";
    }
    else
    cout<<"TRY AGAIN\n";

}