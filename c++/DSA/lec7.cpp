#include<iostream>
#include<cmath>
using namespace std;

// //Reveerse of integer

// int reverse( int x){
//     int ans = 0;
//     while(x!=0){
//         int digit = x % 10;
//         ans = ans * 10 + digit;
//         x = x / 10;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin >> n;
//     int res = reverse(n);
//     cout << res;
// }



// //Compliment base 10 int leetcode problem
// int bitwiseCompliment(int x){
//     int m = x;
//     int mask = 0;
//     if(x == 0)
//     return 1;
//     while( m != 0){
//         mask = (mask << 1) | 1;
//         m = m >> 1; 
//     }
//     int ans = (~x) &  mask;
//     return ans;
// } 
// int main(){
//     int n;
//     cin >> n;
//     int res = bitwiseCompliment(n);
//     cout << res << endl;
// }



//power of 2
bool isPowerOfTwo(int n){
    int ans = 1;
    for(int i=1; i<=30; i++){
        if(ans == n){
            return true;
        }
        //if(ans = INT_MAX/2)
        ans= ans * 2;
    }
    return false;
}
int main(){
    int num;
    cin >> num;
    bool res = isPowerOfTwo(num);
    cout << res << endl;
}