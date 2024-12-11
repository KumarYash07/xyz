#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
static bool cmp(vector<int>x,vector<int>y){
    if(x[1]>y[1])
    return true;
    else 
    return false;
}
int main(){
    int N,x,y;
    cout<<"Enter n= ";
    cin>>N;
    vector<vector<int>>v;
    for(int i=1;i<=N;i++){
        vector<int>point(2);
        cin>>x>>y;
        point[0]=x;
        point[1]=y;
        v.push_back(point);
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++){
        cout<<v[i][0]<<" "<<v[i][1]<<endl;
    }
}
