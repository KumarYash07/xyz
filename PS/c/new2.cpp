#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
static bool cmp(pair<int,int>x, pair<int,int>y)
{
    if(x.first>y.first)
    
}

int main()
{
    vector<pair<int,int>>v;
    v.push_back({4,11});
    v.push_back({2,23});
    v.push_back({5,32});
    v.push_back({6,37});
    v.push_back({4,31});
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<","<<v[i].second<<"  ";
    }
    return 0;
}
