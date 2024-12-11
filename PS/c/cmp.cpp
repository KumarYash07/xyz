#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
static bool cmp(int x, int y)
{
    if(x%2==0 && y%2==0)
    return x>y;
    else if(x%2!=0 && y%2!=0)
    return x<y;
    else if(x%2==0 && y%2!=0)
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
    v.push_back(41);
    v.push_back(2);
    v.push_back(21);
    v.push_back(30);
    v.push_back(87);
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
