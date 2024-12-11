#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
static bool cmp(int x, int y)
{
    return x>y;

}
// static bool cmp(int x, int y)
// {
//     return x>y;
// }
static bool cmp(int a, int b)
{
    if(a%2==0 && b%2==0)
    return a>b;
    else if(a%2!=0 && b%2!=0)
    return a<b;
    else if(a%2==0 && b%2!=0)
    return true;
    else 
    return false;
}


int main()
{
    vector<int>v;
    v.push_back(20);
    v.push_back(25);
    v.push_back(5);
    v.push_back(18);
    v.push_back(7);
    v.push_back(4);
    v.push_back(2);    
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;

    for(auto i:v)
      cout<<i<<" ";
    cout<<endl<<endl;

    vector<int>y(5,-1);
    for(int i=0;i<y.size();i++)
    {
        cout<<y[i]<<" ";
    }
    cout<<endl<<endl;

    vector<int>z;
    z.push_back(20);
    z.push_back(25);
    z.push_back(5);
    z.push_back(18);
    z.push_back(7);
    z.push_back(4);
    z.push_back(2);
    sort(z.begin(),z.end());
    for(int i=0;i<z.size();i++){
        cout<<z[i]<<" ";
    }
    cout<<endl<<"\n";

    
    vector<int>w;
    w.push_back(20);
    w.push_back(25);
    w.push_back(5);
    w.push_back(18);
    w.push_back(7);
    w.push_back(4);
    w.push_back(2);
    sort(w.begin(),w.end(),cmp);
    for(int i=0;i<w.size();i++){
        cout<<w[i]<<" ";
    }
    cout<<"\n"<<endl;
    

    

    return 0;
}