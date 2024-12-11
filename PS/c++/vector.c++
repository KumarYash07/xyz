#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>>v;
    v.push_back({2,-4});
    v.push_back({3,7});
    v.push_back({3,9});
    v.push_back({1,4});
    v.push_back({2,6});
    v.push_back({1,5});
    v.push_back({9,7});
    v.push_back({-2,2});

    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}
