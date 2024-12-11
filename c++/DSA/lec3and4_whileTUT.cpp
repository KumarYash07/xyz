#include<iostream>
using namespace std;
// int main(){
//     int n;             //printing numbers
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         cout<<i<<" ";
//         i++;
//     }
// }


// int main(){
//     int n;              //sum of numbers
//     cin>>n;
//     int i=1, sum=0;
//     while(i<=n){
//         sum=sum+i;
//         i++;
//     } 
//     cout<<"sum="<<sum;
// }


// int main(){
//     int n;                //sum of all even numbers
//     cin>>n;
//     int i=2,sum=0;
//     while(i<=n){
//         if(i%2==0){
//            sum=sum+i; 
//         }
//         i++;
//     }
//     cout<<"sum of even num:"<<sum;
// }


// int main(){
//     int n;                          //prime or not
//     cin>>n;
//     int i=2,flag=0;
//     while(i<n)
//     {
//         if(n%i==0){
//            flag++;
//         }
//         i++;
//     }
//     if(flag==0){
//         cout<<"Prime\n";
//     }
//     else{
//         cout<<"Not Prime";
//     }
// }


// int main(){
//     int n;                   //pattern 1
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// int main(){
//     int n;                      //pattern printing value of 111,222,333
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// int main(){
//     int n;                      //pattern printing value of 123,123,123 
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// int main(){
//     int n;                      //pattern printing 111,222,333
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=i;
//         while(j<=n){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// int main(){
//     int n;                      //pattern printing value of 321,321,321
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// int main(){
//     int n;                      //pattern printing value of count
//     cin>>n;                     // 1234,5678,9 10 11 12
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// int main(){
//     int n;                      //pattern triangle
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){
//     int n;                      //pattern triangle number of rows
//     cin>>n;                                       // 1,22,333,444
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<row;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){
//     int n;                      //pattern printing 123,234,345
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i+j-1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// int main(){
//     int n;                      //pattern triangle 1,23,456,78910
//     cin>>n;
//     int row=1;
//     int count=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<count<<" ";
//             count++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){
//     int n;                      //pattern triangle 1,23,345,4567
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         // int res=row;
//         while(col<=row){
//             cout<<row+col-1<<" ";
//             // cout<<res<<" ";
//             // res++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){
//     int n;                      //pattern triangle 1,21,321,4321
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         // int res=row;
//         while(col<=row){
//             cout<<row-col+1<<" ";
//             //cout<<res<<" ";
//             //  res--;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){
//     int n;                //printing pattern AAA,BBB,CCC
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             char ch='A'+row-1;
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){
//     int n;                //printing pattern ABC,ABC,ABC
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             char ch='A'+col-1;
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){
//     int n;                //printing pattern ABC,DEF,GHI
//     cin>>n;
//     int row=1;
//     char count='A';
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             cout<<count<<" ";
//             count++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){
//     int n;                //printing pattern ABC,BCD,CDE
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             char ch='A'+row+col-2;
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){
//     int n;                //printing pattern A,BB,CCC,DDDD
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             char ch='A'+row-1;
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){
//     int n;                //printing pattern A,BC,DEF,GHIJ
//     cin>>n;
//     int row=1;
//     char ch='A';
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<ch<<" ";
//             ch++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){
//       int n;                       //pattern printing A,BC,CDE,DEFG
//       cin>>n;
//       int row=1;
//       while(row<=n){
//         int col=1;
//         while(col<=row){
//            char ch='A'+row+col-2;
//            cout<<ch<<" ";
//            col++;  
//         }
//         cout<<endl;
//         row++;
//       }
// }


// int main(){
//       int n;                       //pattern printing D,CD,BCD,ABCD
//       cin>>n;
//       int row=1;
//       while(row<=n){
//         int col=1;
//         char start='A'+n-row;
//         while(col<=row){
//            cout<<start<<" ";
//            start++;
//            col++;  
//         }
//         cout<<endl;
//         row++;
//       }
// }


// int main(){
//     int n;                           //pattern printing ABC,BCD,CDE
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         char start='A'+row-1;
//         while(col<=n){
//             cout<<start<<" ";
//             start++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }
  

// int main(){
//     int n;                     //pattern printing     *
//     cin>>n;                    //                    **
//     int row=1;                 //                   ***   
//     while(row<=n){
//         //space print hoga
//         int space=n-row;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         //star print hoga
//         int col=1;
//         while(col<=row){
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){
//     int n;                          //pattern printing
//     cin>>n;                         //****
//     int row=1;                      //***  
//     while(row<=n){                  //**
//         int col=1;                  //*
//         int star=n-row+1;
//         while(col<=star){
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){          
//     int n;                           //pattern printing        
//     cin>>n;                          //       ***
//     int row=1;                       //        **
//     while(row<=n){                   //         *
//         //space printing
//         int space=row-1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         //star print hoga
//         int star=n-row+1;
//         while(star){
//             cout<<"*";
//             star--;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// int main(){
//     int n;                            //pattern printing 3 triangles
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         //print 1st trangle (space)
//         int space=n-row;
//         while(space){
//             cout<<" ";
//             space--;
//         }

//         //print 2nd triangle
//         int col=1;
//         while(col<=row){
//             cout<<col;
//             col++;
//         }

//         //print 3rd triangle
//         int start=row-1;
//         while(start){
//             cout<<start;
//             start--;
//         }
//         cout<<endl;
//         row++;  
//     }
// }

int main(){
    int n;                            //DABBANG pattern
    cin>>n;
    int row=1;
    while(row<=n){
        //print 1st triangle
        int col=1;
        int start=n-row+1;
        while(col<=start){
            cout<<col;
            col++;
        }
        // star printing 2nd tiangle
        int star1=row-1;
        while(star1){
            cout<<"*";
            star1--;
        }

        //printing star 3rd triangle
        int star2=row-1;
        while(star2){
            cout<<"*";
            star2--;
        }
        //printing 4th triangle
        int end=n-row+1;
        while(end){
            cout<<end;
            end--;
        }
        cout<<endl;
        row++;
    }
}