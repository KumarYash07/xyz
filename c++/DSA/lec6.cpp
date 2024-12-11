#include<iostream>
#include<cmath>
using namespace std;

//Reversal of a number

// int main(){
//     int n;
//     cin >> n;
//     int ans=0;
//     while(n!=0){
//         int digit = n%10;
//         ans = ans * 10 + digit;
//         n = n/10; 
//     }
//     cout<< ans << endl;
// }

// decimal to binary

// int main(){
//     int n;
//     cin >> n;
//     int ans = 0;
//     int i = 1;
//     while(n!=0){
//         int bit = n%2;
//         ans =(bit * i) + ans;
//         n = n / 2;
//         i = i*10;
//     }
//     cout << ans << endl;
// }


//Binary to decimal

int main() {
    int n;
    cin >> n;
    int ans = 0 , i=0;
    while(n!=0){
        int digit = n % 10;;
        if(digit==1){
            ans = ans + pow(2,i);
        }
        n = n / 10;
        i++;
    }
    cout << ans <<endl;
}